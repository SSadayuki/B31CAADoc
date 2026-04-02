/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#ifndef CATLISTP_CATSession_H_
#define CATLISTP_CATSession_H_

//   listes de CATSession
class CATSession;
// clean previous requests for extra functionalities :
#include  "CATLISTP_Clean.h"

#include "CATLISTP_PublicInterface.h"

// define macros CATLISTP_DECLARE :
#include  "CATLISTP_Declare.h"
// DECLARE All functions for class CATListPtrCATSession :
// (generate body of class)


#include  "AC0XXLNK.h"
#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedByAC0XXLNK


CATLISTP_DECLARE( CATSession )

typedef CATLISTP(CATSession) CATLISTP_CATSession;

#endif
