#ifndef CATIArrSegmentsString_H
#define CATIArrSegmentsString_H
// COPYRIGHT DASSAULT SYSTEMES 1999
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATArrangementItfCPP.h"
#include "CATBaseUnknown.h"

class CATUnicodeString;
class CATIMovable_var;
class CATIRouSection_var;
class CATIArrNode_var;
class CATListValCATBaseUnknown_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATArrangementItfCPP IID IID_CATIArrSegmentsString;
#else
extern "C" const IID IID_CATIArrSegmentsString;
#endif

/**
 * Interface on a Segment .
 * <b>Role</b>: To get the segment data, corresponding nodes.
 */

class ExportedByCATArrangementItfCPP CATIArrSegmentsString : public CATBaseUnknown
{

  CATDeclareInterface;

public:
	  
  /**
   * Return a list of Segments.
	 * @param oListOfSegments
   *   CATListValCATBaseUnknown_var.
   * @return
   *   HRESULT.
   */
  virtual HRESULT ListSegments ( CATListValCATBaseUnknown_var& oListOfSegments ) = 0;


  /**
   * Return a list of Nodes.
	 * @param oListOfNodes
   *   CATListValCATBaseUnknown_var.
   * @return
   *   HRESULT.
   */
  virtual HRESULT ListNodes ( CATListValCATBaseUnknown_var& oListOfNodes ) = 0;
 

  /**
   * GetNominalSize.
   * @param iSize  
   *   Return the nominal size fo the SegmentString.
   */
  virtual HRESULT GetNominalSize ( CATUnicodeString& oSize ) = 0;


  /**
   * GetMinLen.
   * @param oMinLen  
   *   Return the minimum straight length on a run.
   */
  virtual HRESULT GetMinLen ( double& oMinLen ) = 0;


   /**
   * Get Section.
	 * @param oSection
   *   CATIRouSection_var.
   * @return
   *   HRESULT.
   */
  virtual HRESULT GetSection ( CATIRouSection_var& oSection ) = 0;


    /**
   * Retrieve the extremity nodes of the string element.
   * @param ohEndPoint1 
   *   Beginning node of a string element.
   * @param ohEndPoint2
   *   Ending node of a string element.
   */
   virtual HRESULT GetEndPoints ( CATIArrNode_var& ohEndPoint1, 
                                  CATIArrNode_var& ohEndPoint2 ) = 0;

  /**
   * Get the total length of the string.
   * @param iRelAxis
   *   Reference Axis.
   */
  virtual HRESULT GetStringLength (const CATIMovable_var &iRelAxis, 
                                   double &oLength ) = 0; 
  




};

CATDeclareHandler( CATIArrSegmentsString, CATBaseUnknown );

#endif
