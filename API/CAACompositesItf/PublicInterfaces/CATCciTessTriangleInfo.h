// COPYRIGHT Dassault Systemes 2008
//===================================================================
//
// CATCciTessTriangleInfo.cpp
// Header definition of CATCciTessTriangleInfo
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//
// 
//===================================================================
#ifndef CATCciTessTriangleInfo_H
#define CATCciTessTriangleInfo_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CATListOfInt.h" 
#include "CATCldAttribute.h" 
#include "CAACompositesHMAItf.h"

class CATFace; 

class ExportedByCAACompositesHMAItf CATCciTessTriangleInfo : public CATCldAttribute  
{  
public:  
    CATCciTessTriangleInfo (CATListOfInt iPlyList, CATListOfInt iPlyGroupList, int iAreaPos);  
    virtual ~CATCciTessTriangleInfo();

   
    void GetPliesNumbers      (CATListOfInt& oListPliesIdx);
    void GetPliesGroupNumbers (CATListOfInt& oListPliesGroupIdx);
    void GetAreaNumber        (int& oAreaIdx);


private:

    CATCciTessTriangleInfo( const CATCciTessTriangleInfo& );
    void	operator=( const CATCciTessTriangleInfo& );

    CATListOfInt   _ListPliesIdx;  
    CATListOfInt   _ListPliesGroupIdx; 
    int            _AreaIdx;  
   
};
#endif 

