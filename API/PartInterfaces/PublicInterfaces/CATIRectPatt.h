/* -*-c++-*- */
#ifndef CATIRectPatt_H
#define CATIRectPatt_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIShape.h>
#include "CATIPrtPattern.h"
#include <CATICkeParm.h>
#include <CATLISTV_CATISpecObject.h>
#include <CATMathDirection.h>
#include <CATMathPoint.h>
#include <CATMathGridOfVectors.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIRectPatt;
#else
extern "C" const IID IID_CATIRectPatt;
#endif


/**
 * Interface to read or modify the specifications of the rectangular pattern.
 * <b>Role</b>: The rectangular pattern feature allows users to duplicate an original feature according
 * a rectangular distribution. 
 */
class ExportedByPartItf CATIRectPatt : public CATIPrtPattern
{
  CATDeclareInterface;

  public :

  /** @nodoc */
  virtual CATMathDirection GetDirection1() = 0;
  /** @nodoc */
  virtual CATMathDirection GetDirection2() = 0;

  /**
   *  Returns the boolean flag indicating the selected first direction.
   *   True indicates that original feature is duplicated in the
   *   direction of the natural orientation of the selected first direction.
   */
  virtual CATBoolean GetSens1() = 0;

  /**
   *  Returns the boolean flag indicating the selected second direction.
   *   True indicates that original feature is duplicated in the
   *   direction of the natural orientation of the selected second direction.
   */
  virtual CATBoolean GetSens2() = 0;

  /**
  * Returns the number of times that the original feature will be duplicated along
  * pattern first direction.
  */
  virtual int GetNb1() = 0;

  /**
  * Returns the number of times that the original feature will be duplicated along
  * pattern second direction.
  */
  virtual int GetNb2() = 0;

  /**
  * Returns the distance that separate two consecutive duplications in the pattern
  * along its first direction.
  */ 
  virtual double GetStep1() = 0;

  /**
  * Returns the distance that separate two consecutive duplications in the pattern
  * along its second direction.
  */ 
  virtual double GetStep2() = 0;

  /**
  * Returns the position of the original feature
  * among its duplications along the first direction.
  */
  virtual int GetNu() = 0;

  /**
  * Returns the position of the original feature
  * among its duplications along the second direction.
  */
  virtual int GetNv() = 0;

  /**
  *   Returns the angle between the real pattern directions and the two defined directions,
  *   in case of two defined directions only.
  *   The original feature is used as the rotation center.
  *   Nevertheless the duplicated shapes are not own rotated.
  */
  virtual double GetAngleXY() = 0;

  /**
  * Returns the direction as a line or linear edge that specifies the pattern first distribution.
  */
  virtual CATISpecObject_var GetDir1() = 0;

  /**
  * Returns the direction as a line or linear edge that specifies the pattern second distribution.
  */
  virtual CATISpecObject_var GetDir2() = 0;

  /** @nodoc */
  virtual CATICkeParm_var GetParmNb1() = 0;
  /** @nodoc */
  virtual CATICkeParm_var GetParmNb2() = 0;
  /** @nodoc */
  virtual CATICkeParm_var GetParmStep1() = 0;
  /** @nodoc */
  virtual CATICkeParm_var GetParmStep2() = 0;
  /** @nodoc */
  virtual CATICkeParm_var GetParmNu() = 0; 
  /** @nodoc */
  virtual CATICkeParm_var GetParmNv() = 0;
  /** @nodoc */
  virtual CATICkeParm_var GetParmAngleXY() = 0;
	
  /**
  * Sets the boolean flag indicating the natural orientation of
  * the first direction should be used to orientate the pattern operation.
  * @param iSens1
  *  A value of true indicates that first direction is the same as the natural 
  *  orientation of the selected first direction.
  */
  virtual void ModifySens1(CATBoolean iSens1) = 0;

  /**
  * Sets the boolean flag indicating the natural orientation of
  * the second direction should be used to orientate the pattern operation.
  * @param iSens2
  *  A value of true indicates that second direction is the same as the natural 
  *  orientation of the selected second direction.
  */  
  virtual void ModifySens2(CATBoolean iSens2) = 0;

  /**
  * Sets the pattern first direction.
  * @param ihDir1
  * The line or linear edge that specifies the pattern first direction.
  */
  virtual void ModifyDirection1(const CATISpecObject_var &ihDir1) = 0;

  /**
  * Sets the pattern second direction.
  * @param ihDir2
  * The line or linear edge that specifies the pattern second direction.
  */
  virtual void ModifyDirection2(const CATISpecObject_var &ihDir2) = 0;

  /** @nodoc */
  virtual void ModifyMode1UI(int First) = 0;
  /** @nodoc */
  virtual void ModifyMode2UI(int Seconde) = 0;

  /** @nodoc */
  virtual int GetMode1UI() = 0;
  /** @nodoc */
  virtual int GetMode2UI() = 0; 

	/** @nodoc
  Returns the Stagger Step parameter*/
  virtual CATICkeParm_var GetParmSS() = 0;

	/** @nodoc
  Returns the value of the Stagger Step*/
	virtual double GetStagerStep() = 0;

	/** @nodoc
  Returns the orientation of Stagger Pattern
	 * <br>1 indicates first orinetation of Stagger Pattern.
   * <br>2 indicates second orinetation of Stagger Pattern.*/
	virtual void GetStaggerPattType(int &StaggerPattType) = 0;

	/** @nodoc
  Modifies the orientation of Stagger Pattern
	 *@param StaggerPattType
	 * <br><b>Legal values</b>:
   * <br>1 indicates first orinetation of Stagger Pattern.
   * <br>2 indicates second orinetation of Stagger Pattern.*/
	virtual void ModifyStaggerPattType(int StaggerPattType) = 0;

	/** @nodoc
  Returns if user wants to have stagger pattern configuration 
	 * <br>TRUE indicates Stagger pattern configuration.
   * <br>FALSE indicates conventional rectangular pattern configuration.*/
	virtual void GetStaggerPattChoice(boolean &StaggerPattChoice) = 0;

	/** @nodoc
  Modifies the choice of creation of stagger pattern configuration
	 * <br><b>Legal values</b>:
   * <br>TRUE indicates Stagger pattern configuration.
   * <br>FALSE indicates conventional rectangular pattern configuration.*/
	virtual void ModifyStaggerPattChoice(boolean StaggerPattChoice) = 0;
	
	/**
	* Returns whether users want to have identical number of instances along both directions.
	* @param oFlagIdent
   * <br><b>Legal values</b>:
   * <br>1 indicates that users want identical number of instances.
   * <br>0 indicates that users do not want identical number of instances.
	*/
	virtual HRESULT GetIfSquarePattern(int &oFlagIdent) = 0;

	/**
   * Sets whether users want to have identical number of instances along both directions.
   * @param iFlagIdent
   * <br><b>Legal values</b>:
   * <br>1 indicates that users want identical number of instances.
   * <br>0 indicates that users do not want identical number of instances.
   */
	virtual HRESULT SetSquarePattern(int iFlagIdent) = 0;

	/**
	* Returns if user wants to set the value of Staggered Step half of spacing.
	* @param oFlag
	* <br><b>Legal values</b>:
	* <br>1 indicates that users want to set the value to half.
	* <br>0 indicates that users do not want to set the value to half.
	*/
	virtual HRESULT GetIfSSHalfOfSpacing(int &oFlag) = 0;

	/**
   * Sets if user wants to set the value of Staggered Step half of spacing.
   * @param iFlag
   * <br><b>Legal values</b>:
   * <br>1 indicates that users want to set the value to half.
   * <br>0 indicates that users do not want to set the value to half.
   */
	virtual HRESULT SetSSHalfOfSpacing(int iFlag) = 0;

 /**
  * Returns the length of rectangular pattern in first direction.
  * @return
  *   The length value.
  */ 
  virtual double GetLength1()= 0;

 /**
  * Returns the length of rectangular pattern in second direction.
  * @return
  *   The length value.
  */ 
  virtual double GetLength2() = 0;

 /**
  * Gets the length parameter of rectangular pattern in first direction.
  * @return
  *   The length parameter.
  */
  virtual CATICkeParm_var GetParmLength1() = 0;

 /**
  * Gets the length parameter of rectangular pattern in second direction.
  * @return
  *   The length parameter.
  */
  virtual CATICkeParm_var GetParmLength2() = 0;

  /**
  * Sets the length parameter of rectangular pattern in first direction.
  * @param ihLength1Parm
  * The length that specifies the pattern first direction.
  */
  virtual HRESULT ModifyLength1Parm(const CATICkeParm_var & ihLength1Parm) = 0;

  /**
  * Sets the length parameter of rectangular pattern in second direction.
  * @param ihLength2Parm
  * The length that specifies the pattern second direction.
  */
  virtual HRESULT ModifyLength2Parm(const CATICkeParm_var & ihLength2Parm) = 0;
  
  /**
  * Sets the Stagger step parameter of rectangular pattern.
  * @param ihStaggerStep
  * The parameter that specifies the value of stagger step.
  */
  virtual HRESULT ModifyStaggerStep(const CATICkeParm_var & ihStaggerStep) = 0;
};

CATDeclareHandler (CATIRectPatt, CATIPrtPattern); 

#endif // CATIRectPatt_H
