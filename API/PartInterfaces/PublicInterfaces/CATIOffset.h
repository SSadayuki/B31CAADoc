/* -*-c++-*- */
#ifndef CATIOffset_H
#define CATIOffset_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIShape.h>
#include <CATPrtEnum.h>

class CATISpecObject_var;
class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIOffset;
#else
extern "C" const IID IID_CATIOffset;
#endif

/**
 * Interface to represent the offset feature.
 * <b>Role</b>: The offset feature allows users to create a thick surface 
 * above a surfacic feature.
 * The result of the operation is a mechanical feature.
 */
class  ExportedByPartItf CATIOffset : public CATIShape
{
  CATDeclareInterface;


  public:

/**
 * Modifies the distance between the top skin of the offset feature
 * and the surfacic feature.
 * @param iTopOffset
 *	The distance between the surfacic feature and the top 
 *	skin of the offset feature.
 */		
	virtual void ModifyTopOffset(double iTopOffset) = 0;

	
/**
 * Modifies the distance between the bottom skin of the offset feature
 * and the surfacic feature.
 * @param iBotOffset
 *	The distance between the surfacic feature and the bottom 
 *	skin of the offset feature.
 */		
  virtual void ModifyBotOffset(double iBotOffset) = 0;


/**
 * Returns the distance between the top skin of the offset feature 
 * and the surfacic feature.
 * @return the top skin distance
 */			
  virtual double GetTopOffset()  = 0;


/**
 * Returns the distance between the bottom skin of the offset feature 
 * and the surfacic feature.
 * @return the bottom skin distance
 */   
  virtual double GetBotOffset()  = 0;


/**
 * Retrieves the surfacic feature to be offseted.
 * @return the surfacic feature
 * <br><b>Legal values</b>: <tt>CATISpecObject_var</tt> if 
 * the surfacic feature exists
 * or
 * <tt>NULL_var</tt> if it does not.
 */
  virtual CATISpecObject_var GetSurfaceOffset()  =0;


/**
 * Sets or swaps the surfacic feature to be offseted.
 * @param ihSurface
 *	The surfacic feature to be offseted.
 */
  virtual void SwapSurface (const CATISpecObject_var ihSurface) = 0;


/**
 * Retrieves the offset orientation value of the offset feature.
 * @return the offset orientation value
 * <br><b>Legal values</b>: if it equals <tt>NormalSide</tt> (=0) then
 * the offset direction is the same as the normal vector of the surfacic
 * feature.
 * If it equals <tt>InverseNormalSide</tt> (=1) then the offset direction is
 * the opposite of the normal vector of the surfacic feature.
 */
	virtual int GetIsensOffset()  = 0;

/**
 * Invert the offset orientation.
 * <br><b>Legal values</b>: if it equals <tt>NormalSide</tt> (=0) then
 * the offset direction becomes <tt>InverseNormalSide</tt>.
 * If it equals <tt>InverseNormalSide</tt> (=1) then the offset direction 
 * becomes <tt>InverseNormalSide</tt>.
 */
  virtual void ReverseOffdir()  = 0;


  /** @nodoc */
  //virtual void UpdateDim() = 0;


	/** @nodoc */
  virtual CATICkeParm_var GetBotOffsetParm()= 0;


	/** @nodoc */
  virtual CATICkeParm_var GetTopOffsetParm()= 0;

/** @nodoc */ 
  virtual HRESULT GetSmoothingMode(int  &oMode) = 0;

/** @nodoc */ 
  virtual HRESULT SetSmoothingMode(const int iMode) = 0;

/** @nodoc */ 
  virtual HRESULT GetConstantThicknessMode(int &oMode) = 0;

/** @nodoc */ 
  virtual HRESULT SetConstantThicknessMode(const int iMode) = 0;

/** @nodoc */ 
  virtual HRESULT GetMaxDeviation(CATICkeParm_var& ohMaxDeviation) = 0;

/** @nodoc */ 
  virtual HRESULT GetMaxDeviation(double & oMaxDeviation) = 0;

/** @nodoc */  
  virtual HRESULT SetMaxDeviation(const double iMaxDeviation) = 0;  

/**
@nodoc
  * Gets the Thick Surface Tangency Continuity Mode.
  * @param oMode    
  *<br>- 0 - Tangency Continuity Mode Enabled       
  *<br>- 1 - Tangency Continuity Mode Disabled
  */

  virtual HRESULT GetTangencyContinuityMode(int &oMode) = 0;

/**
@nodoc
 * Sets the Thick Surface Tangency Continuity Mode.
  * @param iMode    
  *<br>- 0 - Tangency Continuity Mode Enabled       
  *<br>- 1 - Tangency Continuity Mode Disabled
  */
  virtual HRESULT SetTangencyContinuityMode(const int iMode) = 0;

  /** 
  * Sets the regularization type
  *   @param oRegul
  *      CATPrtRegularization_Undefined if the regularization is not defined
  *	   CATPrtRegularization_Local if the regularization is local
  *	   CATPrtRegularization_Global if the regularization is global
  */
  virtual HRESULT SetRegularizationType(const CATPrtOffsetRegularisationType &iRegul) = 0;

  /** 
  * Gets the regularization type
  *   @param oRegul
  *      CATPrtRegularization_Undefined if the regularization is not defined
  *	   CATPrtRegularization_Local if the regularization is local
  *	   CATPrtRegularization_Global if the regularization is global
  */
  virtual HRESULT GetRegularizationType(CATPrtOffsetRegularisationType &oRegul) = 0;
};
CATDeclareHandler (CATIOffset, CATIShape);

#endif // CATIOffset_H
