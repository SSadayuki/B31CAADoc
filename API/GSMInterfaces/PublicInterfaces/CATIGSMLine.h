/* -*-c++-*- */
#ifndef CATIGSMLine_H
#define CATIGSMLine_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATICkeParm.h"
#include "CATGSMOrientation.h"
class CATISpecObject_var;
class CATListValCATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMLine;
#else
extern "C" const IID IID_CATIGSMLine;
#endif
/**
 * Interface to line feature. 
 * <b>Role</b>: Allows you to set/change the type of the line and
 * to modify the orientation of the line.
 * Line types :<br>
 * <br><b>Legal values </b>: 
 * <tt>  LinePtPt       = 0</tt>    
 * <tt>  LinePtDir      = 1</tt>    
 * <tt>  LineAngle      = 2</tt> 
 * <tt>  LineTangency   = 3</tt>    
 * <tt>  LineNormal     = 4</tt>    
 * <tt>  LineBitangent  = 5</tt>    
 * <tt>  LineBisecting  = 6</tt>    
 * <tt>  LineExplicit   = 30</tt>
 */
#define CATGSMWFLinePtPt				0
#define CATGSMWFLinePtDir				1
#define CATGSMWFLineAngle				2
#define CATGSMWFLineTangency			3
#define CATGSMWFLineNormal  			4
#define CATGSMWFLineBiTangent			5
#define CATGSMWFLineBisecting			6
#define CATGSMWFLineExplicit			30

class ExportedByCATGitInterfaces CATIGSMLine : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

    /**
      * Gets the line type.
        *   @param oT 
      *      Type of Plane 
      */
 virtual HRESULT GetLineType(int & oT) = 0;

    /**
      * Sets the line type.
      * @param iType
      * The new feature type
      * @param iElems
      * The list of specs to prepare for report to new feature
      * @param iReportedSpecPositionTab
      * Array containing for each feature the position in the new feature attributes structure
      * Example : iReportedSpecPositionTab[0] = 2
      *          means that the first feature of iElems list (iElems[1]) has the second position 
      *    in the new feature, according to the replace acceptance 
      *          (a point can only be replaced by a point, for instance).
      * if iReportedSpecPositionTab[i]=0 the replace for ith element could not be done.
      *   Array has to be allocated by calling method.
      * @see CATIGSMFactory#CreateLineType
      */
 virtual HRESULT SetLineType(int iType, 
      CATListValCATISpecObject_var* iElems = NULL, 
      int * iReportedSpecPositionTab = NULL) = 0;
    /**
      * Gets the line orientation.
      * Orientation allows to reverse the line direction from the reference point.
      * For a line of L length, it is the same as creating this line with -L length.
      *   @param oOrientation
      *      orientation
      */
 virtual HRESULT GetOrientation(CATGSMOrientation & oOrientation) = 0;

    /**
      * Sets the line orientation.
      * Orientation allows to reverse the line direction from the reference point.
      * For a line of L length, it is the same as creating this line with -L length.
      *   @param iOrientation
      *      orientation
      */
 virtual HRESULT SetOrientation(const CATGSMOrientation iOrientation) = 0;

    /**
      * Inverts the line orientation.
      */
 virtual HRESULT InvertOrientation() = 0;

  /**
   * Gets the first upto element.
   *   @param oFirstUpto
   */ 
 virtual    HRESULT GetFirstUptoElem (CATISpecObject_var & oFirstUpto) = 0;

       /**
  * Sets the first upto element.
  *   @param iFirstUpto
  */
 virtual    HRESULT SetFirstUptoElem (const CATISpecObject_var iFirstUpto) = 0;

  /**
   * Gets the second upto element.
   *   @param oSecondUpto
   */ 
 virtual    HRESULT GetSecondUptoElem (CATISpecObject_var & oSecondUpto) = 0;

       /**
  * Sets the second upto element.
  *   @param iSecondUpto
  */
 virtual    HRESULT SetSecondUptoElem (const CATISpecObject_var iSecondUpto) = 0;

};
CATDeclareHandler (CATIGSMLine, CATBaseUnknown);
#endif
