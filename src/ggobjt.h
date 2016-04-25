/*===========================================================================*
 *                                                                           
 *  ggobjt.h    GSLgen Object Module Header
 *                                                                           
 *  Written:    2000/02/16    iMatix <tools@imatix.com>
 *  Revised:    2000/02/16
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
 *                                                                           
 *===========================================================================*/

#ifndef GGOBJT_INCLUDED                 /*  Allow multiple inclusions        */
#define GGOBJT_INCLUDED

/*---------------------------------------------------------------------------*/

#include "sfl.h"                        /*  Universal include file           */
#include "ggcomm.h"                     /*  Common declarations              */
#include "ggobjt.h"                     /*  Evaluation functions             */
#include "ggpars.h"                     /*  Script parser header file        */

/*- Types -------------------------------------------------------------------*/

typedef int (EVAL_FUNCTION (int argc,
                            SCRIPT_NODE **argv, 
                            SCRIPT_NODE *result));

typedef struct {
    char
        *name;
    int
        min_params,
        max_params;
    EVAL_FUNCTION
        *evaluate;
} GSL_FUNCTION;


/*- Functions ---------------------------------------------------------------*/

void initialise_objects    (void);
void destroy_objects       (void);
int  object_register       (char *name, GSL_FUNCTION *gsl_functions, int size);
int  method_evaluate       (SCRIPT_NODE *node);
int  evaluate_arguments    (int argc, SCRIPT_NODE **argv);
Bool arguments_are_defined (int argc, SCRIPT_NODE **argv, SCRIPT_NODE *result);

/*---------------------------------------------------------------------------*/

#endif



