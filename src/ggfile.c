/*===========================================================================
 *                                                                           
 *  ggfile.c    GSL File Functions
 *                                                                           
 *  Written:    2000/02/16    iMatix <tools@imatix.com>
 *  Revised:    2000/02/17
 *                                                                            
 *  Copyright (c) 1996-2000 iMatix Corporation
 *                                                                            
 *  This program is free software; you can redistribute it and/or modify      
 *  it under the terms of the GNU General Public License as published by      
 *  the Free Software Foundation; either version 2 of the License, or         
 *  (at your option) any later version.                                       
 *                                                                            
 *  This program is distributed in the hope that it will be useful,           
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of            
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             
 *  GNU General Public License for more details.                              
 *                                                                            
 *  You should have received a copy of the GNU General Public License         
 *  along with this program; if not, write to the Free Software               
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 
 *===========================================================================*/

#include "sfl.h"                        /*  Universal include file           */
#include "ggpars.h"                     /*  Script parser header file        */
#include "ggobjt.h"                     /*  Object Module Header             */
#include "ggeval.h"                     /*  Expression Evaluator Header      */
#include "ggfile.h"                     /*  Include header file              */


/*- Macros ------------------------------------------------------------------*/

#define NAME "file"

/*- Function prototypes -----------------------------------------------------*/

static EVAL_FUNCTION
    eval_exists,
    eval_timestamp,
    eval_rename,
    eval_delete;

/*- Global variables --------------------------------------------------------*/

static GSL_FUNCTION gsl_functions [] = 
{
    {"delete",    1, 1, eval_delete},
    {"exists",    1, 1, eval_exists},
    {"rename",    2, 2, eval_rename},
    {"timestamp", 1, 1, eval_timestamp}
};

/*- Functions ---------------------------------------------------------------*/

int register_file_functions (void)
{
    return object_register (NAME, gsl_functions, tblsize (gsl_functions));
}


static int
eval_exists (int argc, SCRIPT_NODE **argv, SCRIPT_NODE *result)
{
    if (evaluate_arguments (argc, argv) != 0)
        return -1;

    if (! arguments_are_defined (argc, argv, result))
        return 0;

    result-> result_type = TYPE_NUMBER;
    result-> result_n    = file_exists (string_result (argv [0]));
    return 0;
}


static int
eval_timestamp (int argc, SCRIPT_NODE **argv, SCRIPT_NODE *result)
{
    time_t
        timer;

    if (evaluate_arguments (argc, argv) != 0)
        return -1;

    if (! arguments_are_defined (argc, argv, result))
        return 0;

    timer = get_file_time (string_result (argv [0] ));
    result-> result_type = TYPE_NUMBER;
    result-> result_n = (double) timer_to_date (timer) * 1000000
                      + (double) timer_to_time (timer);

    return 0;
}


static int
eval_rename (int argc, SCRIPT_NODE **argv, SCRIPT_NODE *result)
{
    if (evaluate_arguments (argc, argv) != 0)
        return -1;

    if (! arguments_are_defined (argc, argv, result))
        return 0;

    result-> result_type = TYPE_NUMBER;
    result-> result_n    = file_rename (string_result (argv [0]), 
                                        string_result (argv [1]));
    return 0;
}


static int
eval_delete (int argc, SCRIPT_NODE **argv, SCRIPT_NODE *result)
{
    if (evaluate_arguments (argc, argv) != 0)
        return -1;

    if (! arguments_are_defined (argc, argv, result))
        return 0;

    result-> result_type = TYPE_NUMBER;
    result-> result_n    = file_delete (string_result (argv [0]));
    return 0;
}
