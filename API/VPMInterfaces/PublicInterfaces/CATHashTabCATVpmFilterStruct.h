// -*-C++-*-
//=================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=================================================================
// VPM (c) Copyright Dassault Systemes 2001
//=================================================================
// Usage Notes:
// Hash-Table to improve performance of ProductStructure/Config 
// communication in filtering.
//=================================================================
// History:
// February 2002 - NGS - Creation.
//=================================================================

#ifndef CATHashTab_CATVpmFilterStruct_H
#define CATHashTab_CATVpmFilterStruct_H

#include "GUIDVPMInterfaces.h" // ExportedBy
#include "CATBooleanDef.h"

// Clean previous functions requests
#include "CATHTAB_Clean.h"

// We need a small number of features: Find, clean, iterate.
// Insert is provided by default.

#define CATHTAB_Locate
#define CATHTAB_RemoveAll
#define CATHTAB_Next
#define CATHTAB_ApplyDelete

class CATBaseUnknown;


// get macros
#include "CATHTAB_Declare.h"

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces


class ExportedByGUIDVPMInterfaces CATVpmFilterStruct
{
public:
  enum Status { INVALID=0, VALID=1, UNKNOWN=2 };

  CATVpmFilterStruct( CATBaseUnknown *p ) : punk(p), status(UNKNOWN) {
    if(p!=0) p->AddRef();
  }
  CATVpmFilterStruct() : punk(NULL), status(UNKNOWN) {}
  ~CATVpmFilterStruct() { if(punk!=0) punk->Release(); }
  

  // Operator new for 'placement' allocation.
  // void * operator new(size_t , void *p) { return p; };
  
  int IsUnknown() { return status==UNKNOWN; };
  int IsValid() { return status==VALID; };

  CATBaseUnknown *Object() { return punk; };
  void SetObject(CATBaseUnknown *p) {
    if(punk!=0) punk->Release();
    punk=p;
    if(p!=0) p->AddRef();
  };

  void SetUnknown() { status=UNKNOWN; };
  void SetValid() { status=VALID; };
  void SetInvalid() { status=INVALID; };

private:
  CATBaseUnknown *punk;
  enum Status status;
};

ExportedByGUIDVPMInterfaces unsigned int HashFilterStruct ( CATVpmFilterStruct *p );

ExportedByGUIDVPMInterfaces int CompareFilterStruct ( CATVpmFilterStruct *p1, CATVpmFilterStruct *p2);


// Do not use this Hash_tab
//----------------------------------------------------
// declares the type CATHTAB(CATVpmFilterStruct)
CATHTAB_DECLARE( CATVpmFilterStruct );

// Use the hash-tab below !!!
//--------------------------------------
// The goal of this derived Hash-Tab is to elegantly include the deallocation
// of the CATVpmFilterStruct objects in the destructor.

#define NEW_CATVPMFILTERSTRUCT_IN_HTAB

class ExportedByGUIDVPMInterfaces CATVpmFilterHashTab : public CATHTAB(CATVpmFilterStruct)
{
public:
  CATVpmFilterHashTab( PFHash pfh, PFCompare pfc, int idim );
  ~CATVpmFilterHashTab();

#ifdef NEW_CATVPMFILTERSTRUCT_IN_HTAB
  // Adding a new Insert method in order to encapsulate:
  // 1. that we insert a CATVpmFilterStruct, allocated by new.
  // 2. that we store pUnk->GetImpl(0) into the CATVpmFilterStruct, not just the pUnk pointer.
  int Insert( const CATBaseUnknown * pUnk );

  CATVpmFilterStruct * Locate( const CATBaseUnknown * pUnk ) const;
#endif
};
     

#endif







