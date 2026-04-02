//==============================================================================================================
// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2000
// CATCldAttribute
//==============================================================================================================
// Creation: JLH 06-Apr-2000
//==============================================================================================================

#ifndef CATCldAttribute_H
#define CATCldAttribute_H

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */ 

#include "YP00IMPL.h"
#include "CATCGMVirtual.h"

/**
 * Abstract top class for the attributes associated to the points and the triangles the CloudEditor entities.
 */
class ExportedByYP00IMPL CATCldAttribute : public CATCGMVirtual
{

//==============================================================================================================
// Public Part.
//==============================================================================================================

public:

  CATCldAttribute() ;
//#ifdef CATIAV5R14
  virtual ~CATCldAttribute() ;
/*
#else
  ~CATCldAttribute() ;
#endif
*/
} ;

#endif
