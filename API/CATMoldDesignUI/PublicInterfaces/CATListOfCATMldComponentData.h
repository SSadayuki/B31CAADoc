// COPYRIGHT DASSAULT SYSTEMES 1999
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
//===================================================================
//
// CATListOfCATMldComponentData.h
// Header definition of CATListOfCATMldComponentData
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//
//  17/07/2000 : fdm; Creation Composant generique
//  10/09/2001 : fdm; Ajout CATLISTP_RemoveAll
//  21/08/2001 : bga; Code Review (lecture et corrections faites).
//===================================================================
#ifndef CATListOfComponentData_H
#define CATListOfComponentData_H

#include "CATMldServicesUI.h"

class CATMldComponentData;

#include "CATLISTP_Clean.h"

#define CATLISTP_Append
#define	CATLISTP_InsertAt
#define	CATLISTP_RemoveNulls
#define	CATLISTP_RemoveAll
#define CATLISTP_Replace

#include "CATLISTP_Declare.h"

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByCATMldServicesUI

CATLISTP_DECLARE( CATMldComponentData )

#define CATListOfComponentData CATLISTP(CATMldComponentData)

#endif
