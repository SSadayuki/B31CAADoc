// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
//
// CATSPPActivityCCPExt : --EXTENSION--
// <explain concisely class main purpose and nature>
//
//=============================================================================
// Usage Notes:
//
// <describe here how you intend this class to be used>
//=============================================================================
// Feb. 98   Creation                                   P. Motte
// Mar. 98   Implementation of BoundaryExtract and	   P. Condemine
//	    Extract for CCP of text format
// Feb 2007	 Expose to PublicInterfaces for CAA			gny
//=============================================================================

/** 
* @CAA2Level L0
* @CAA2Usage U2 
*/

#ifndef CATSPPActivityCCPExt_H
#define CATSPPActivityCCPExt_H


#include "SP0BBOSM.h"
#include "ObjectCCP_SPEC.h"

class CATUnicodeString;
class CATISPPAbstractActivity_var;
class CATSysWeakRef;

class ExportedBySP0BBOSM CATSPPActivityCCPExt : public ObjectCCP_SPEC
{
    CATDeclareClass;
  
public:
  // Default constructor/copy constructor/other constructors/Destructor
  CATSPPActivityCCPExt();
  virtual ~CATSPPActivityCCPExt();
  
  // CATICutAndPastable interface
  virtual int BoundaryExtract(ListOfVarBaseUnknown & objects_already_in_boundary,
    const ListOfVarBaseUnknown * objects_to_add = NULL,
    const CATFormat * an_imposed_format = NULL ) const;
  
  virtual int Create(CATBaseUnknown_Associations & association_of_objects,
    const CATFormat * an_imposed_format = NULL) ;
  
  virtual int Update(CATBaseUnknown_Associations & association_of_objects,
    const CATFormat * an_imposed_format,
    ListOfVarBaseUnknown * to_cur_objects);
  
private:
  CATSysWeakRef * _pSourceWeakReaf;  
};


#endif
