/* -*-c++-*- */
#ifndef CATISketch_h
#define CATISketch_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATISketchEditor.h"
#include "CATListOfInt.h"
class CATI2DAxis_var;
class CATI2DLine_var;
class CATISpecObject_var;

/**
 * The methods of this interface provide the client with the functionality
 * for handling a sketch.
 * <b>Role</b>: 
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATISketch;
#else
extern "C" const IID IID_CATISketch;
#endif

class ExportedByCATSketcherInterfaces CATISketch : public CATISketchEditor
{
  CATDeclareInterface;

public: 
  /**
   * Tells if the sketch is empty.
   * @return <tt>int</tt>
   * <dl>
   * <dt> <tt>1</tt>  <dd> The shetch is empty.
   * <dt> <tt>0</tt>  <dd> The sketch is not empty.
   * </dl>
   */
  virtual int IsEmpty() = 0;
  /**
   * Returns the position of the sketch in space.
   */
  virtual HRESULT GetAxisData(double *oRootPoint,double *oHAxis,double *oVAxis) = 0;
  /**
   * Defines the position of the sketch in space.
   */
  virtual HRESULT SetAxisData(const double *iRootPoint,const double *iHAxis,const double *iVAxis) = 0;
  /**
   * Returns the planar support of the sketch.
   */
  virtual HRESULT GetPlanarSupport(CATISpecObject_var& oPlane) = 0;
  /**
   * Defines the planar support of the sketch (the sketch becomes Sliding).
   */
  virtual HRESULT AttachToPlane(const CATBaseUnknown_var& iPlane, const int iKeepRelativOrientation=0, const int iSlidingMode=-1) = 0;
  /**
   * Returns the (unique) center line of the sketch.
   */
  virtual CATISpecObject_var GetCurrentCenterLine() = 0;
  /**
   * Defines the (unique) center line of the sketch.
   */
  virtual HRESULT SetCurrentCenterLine(const CATI2DLine_var& iLine) = 0;
  /**
   * Returns the absolute axis of the sketch.
   */
  virtual HRESULT GetAbsolute2DAxis(CATI2DAxis_var& oAxis) = 0;
  /**
   * @nodoc
   */
  virtual CATISpecObject_var GetCurrentAxis() = 0;
  /**
   * @nodoc
   */
  virtual HRESULT SetCurrentAxis(const CATI2DAxis_var& iAxis) = 0;
  /**
   * Isolates the projected and intersected Geometries.
   */
  virtual HRESULT Isolate() = 0;
  /**
   * @nodoc
   */
  virtual CATISpecObject_var GetSupport() = 0;
  /**
   * Retrieves all geometries.
   * @param <tt>const CATIdent iIntfName</tt>
   * [in] To get only geometries answering to iIntfName interface.
   * @param <tt>CATListValCATI2DWFGeometry_var& ioGeomLst</tt>
   * [inout] The list of geometries.
   */
  virtual HRESULT GetComponents(const CATIdent iIntfName,CATListValCATI2DWFGeometry_var& ioGeomLst) = 0;
  /**
   * @nodoc
   */
  virtual HRESULT GetProfile(CATListValCATI2DWFGeometry_var& oGeomList,int& IsClosed,CATListOfInt *oSenseList=NULL,int* oDiagnostic=NULL) = 0;
  /**
   * @nodoc
   */
  virtual HRESULT ResetOrientation() = 0;

  /**
   * @nodoc
   */
  virtual HRESULT GetSolvingStatus(int& ioStatus) = 0;

  /**/
};

CATDeclareHandler(CATISketch,CATISketchEditor);

#endif
