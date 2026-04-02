#ifndef CATCkeDataTypes_h
#define CATCkeDataTypes_h
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
//////////////////////////////////////////////////////////////////////////
// Copyright (C) 1996 Dassault-Systemes 
//
// Cke data types definitions
// use of pseudo-corba types
//
//
//////////////////////////////////////////////////////////////////////////
/*
$Log: CATCkeDataTypes.h,v $
 * Revision 1.1  1997/04/03  15:01:33  aal
 * Initial revision
 *
 * Revision 1.8  1997/01/20  16:39:36  obt
 * portage_brackets_include
 *
 * Revision 1.7  1996/11/26  18:23:59  obt
 * freeze_06
 *
 * Revision 1.6  1996/11/13  15:12:04  obt
 * IRIX
 *
 * Revision 1.6  1996/11/13  15:12:04  obt
 * IRIX
 *
 * Revision 1.5  1996/11/05  16:30:27  obt
 * freeze_04
 *
 * Revision 1.5  1996/11/05  16:30:27  obt
 * freeze_04
 *
 * Revision 1.4  1996/10/21  10:17:03  obt
 * freeze_v01
 *
 * Revision 1.4  1996/10/21  10:17:03  obt
 * freeze_v01
 *
 * Revision 1.3  1996/10/21  09:07:03  obt
 * *** empty log message ***
 *
 * Revision 1.3  1996/10/21  09:07:03  obt
 * *** empty log message ***
 *
 * Revision 1.2  1996/10/16  16:46:47  obt
 * *** empty log message ***
 *
 * Revision 1.2  1996/10/16  16:46:47  obt
 * *** empty log message ***
 *
 * Revision 1.1  1996/10/11  15:01:33  obt
 * Initial revision
 *
 * Revision 1.2  1996/10/11  09:05:07  obt
 * ajout forward
 *
 * Revision 1.1  1996/10/11  08:41:14  obt
 * Initial revision
 *
*/

// primary data types

typedef CORBAAny Any;

typedef CATUnicodeString String;
typedef double Real;
typedef int    Integer;

// boolean data type definition
#include "CATCkeBoolean.h"

#endif


