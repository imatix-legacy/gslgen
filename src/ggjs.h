/*===========================================================================
 *                                                                           
 *  ggjs.h      Javascript header file for GSLGen                          
 *                                                                           
 *  Written:    1999/12/22    iMatix <tools@imatix.com>
 *  Revised:    2000/01/03
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

#if defined (__WINDOWS__) || defined (__MSDOS__) || defined (__OS2__)
#    define XP_PC 1
#elif defined (__UNIX__)
#    define XP_UNIX 1
#endif
#include "jsapi.h"                      /*  Javascript shell                 */
