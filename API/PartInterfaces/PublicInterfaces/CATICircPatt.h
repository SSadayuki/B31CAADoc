/* -*-c++-*- */
#ifndef CATICircPatt_H
#define CATICircPatt_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include <PartItf.h> 
#include <CATIPrtPattern.h>
#include <CATICkeParm.h>
#include <CATLISTV_CATISpecObject.h>
#include <CATMathDirection.h>
#include <CATMathGridOfVectors.h>
#include <CATMathLine.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATICircPatt;
#else
extern "C" const IID IID_CATICircPatt;
#endif

/**
 * Interface to read or modify the specifications of the circular pattern.
 * <b>Role</b>: The circular pattern feature allows users to duplicate an original feature according
 * a circular distribution. 
 */
class ExportedByPartItf CATICircPatt : public CATIPrtPattern
{
  CATDeclareInterface;
  
  public :

 /**
  * Returns the axis around which duplications will be rotated relative to each other.
  */
  virtual CATISpecObject_var GetDir() = 0;
  
  /**
  * Returns the point that specifies the pattern rotation center.
  */
  virtual CATISpecObject_var GetPto() = 0;

  /** @nodoc */
  virtual CATMathPoint GetCenterPoint() = 0;
  /** @nodoc */
  virtual CATMathLine GetAxisLine() = 0;
  /** @nodoc */
  virtual CATMathDirection GetDirection1() = 0;
  /** @nodoc */
  virtual CATMathDirection GetDirection2() = 0;

  /**
  * Returns the boolean flag indicating the natural orientation of
  * the axial direction used to orientate the pattern operation.
  * A value of true indicates that axial direction is the same as the natural 
  * orientation of the selected direction.
  */  
  virtual CATBoolean GetSensa() = 0;


  /**
  * Returns the number of times that the original feature will be duplicated along
  * the pattern radial direction.
  */
  virtual int GetNbr() = 0;

  /**
  * Returns the number of times that the original feature will be duplicated along
  * the pattern axial direction.
  */ 
  virtual int GetNba() = 0;

  /**
  * Returns the distance that separate two consecutive duplications in the pattern
  * along its radial direction.
  */ 
  virtual double GetStepr() = 0;

  /**
  * Returns the distance that separate two consecutive duplications in the pattern
  * along its axial direction.
  */ 
  virtual double GetStepa() = 0;

  /**
  * Returns the position of the original feature
  * among its duplications along the radial direction.
  */
  virtual int GetNr() = 0;

  /**
  * Returns the position of the original feature
  * among its duplications along the axial direction.
  */
  virtual int GetNa() = 0;

  /** @nodoc */
  virtual double GetAngleXY() = 0;

  /**
  * Returns the boolean flag that specifies if duplications keep the same orientation.
  *  <br>True to keep the same orientation of the original feature
  *  for its duplications.
  *  <br>False to orientate the duplications of the original feature same
  *  according to the radial direction.
  */
  virtual CATBoolean GetInstRot() = 0;

  /** @nodoc */
  virtual CATICkeParm_var GetParmNbr() = 0;
  /** @nodoc */
  virtual CATICkeParm_var GetParmNba() = 0;
  /** @nodoc */
  virtual CATICkeParm_var GetParmStepr() = 0;
  /** @nodoc */
  virtual CATICkeParm_var GetParmStepa() = 0;
  /** @nodoc */
  virtual CATICkeParm_var GetParmNr() = 0;
  /** @nodoc */
  virtual CATICkeParm_var GetParmNa() = 0;
  /** @nodoc */
  virtual CATICkeParm_var GetParmAngleXY() = 0;

  /**
  * Sets the pattern rotation center.
  * @param ihPto
  *  The point or vertex that specifies the pattern rotation center.
  */
  virtual void ModifyPto(const CATISpecObject_var &ihPto) = 0;

  /**
  * Sets the axis around which duplications will be rotated relative to each other.
  * @param ihDir
  *  The line or linear edge that specifies the axis around which duplications
  *  will be rotated relative to each other.
  */
  virtual void ModifyDir(const CATISpecObject_var &ihDir) = 0;

  /**
  * Sets the boolean flag indicating the natural orientation of
  * the axial direction used to orientate the pattern operation.
  * @param iSensa
  *  A value of true indicates that axial direction is the same as the natural 
  *  orientation of the selected direction.
  */
  virtual void ModifySensa(CATBoolean iSensa) = 0;

  /**
  * Sets the boolean flag that specifies if duplications keep the same orientation.
  * @param iInstRot
  *  <br>True to keep the same orientation of the original feature
  *  for its duplications.
  *  <br>False to orientate the duplications of the original feature same
  *  according to the radial direction.
  */
  virtual void ModifyInstRot(CATBoolean iInstRot) = 0;

  /** @nodoc */
  virtual void ModifyMode1UI(int First) = 0;
  /** @nodoc */
  virtual void ModifyMode2UI(int Seconde) = 0;
  /** @nodoc */
  virtual void SetAttributeDirection ( const CATMathDirection &iDirection) = 0;
  /** @nodoc */
  virtual void GetAttributeDirection (CATMathDirection &oDirection) = 0;
  /** @nodoc */
  virtual int GetMode1UI() = 0;
  /** @nodoc */
  virtual int GetMode2UI() = 0;  

  /** Returns the Stagger Step parameter.*/
  virtual CATICkeParm_var GetParmSS() = 0;

  /** Returns the value of the Stagger Step.*/
  virtual double GetStagerStep() = 0;

  /** Returns the orientation of Stagger Pattern.
  *@param StaggerPattType[out]
  *		The type of orientation of staggered configuration.
  * <br>1 indicates first orinetation of Stagger Pattern.
  * <br>2 indicates second orinetation of Stagger Pattern.*/
  virtual HRESULT GetStaggerPattType(int &StaggerPattType) = 0;

  /** Modifies the orientation of Stagger Pattern.
  *@param StaggerPattType[in]
  *		The type of orientation of staggered configuration.
  * <br><b>Legal values</b>:
  * <br>1 indicates first orinetation of Stagger Pattern.
  * <br>2 indicates second orinetation of Stagger Pattern.*/
  virtual HRESULT ModifyStaggerPattType(int StaggerPattType) = 0;

  /** Returns if user wants to have stagger pattern configuration.
  * @param StaggerPattChoice[out]  *		
  * <br>TRUE indicates Stagger pattern configuration.
  * <br>FALSE indicates conventional circular pattern configuration.*/
  virtual HRESULT GetStaggerPattChoice(boolean &StaggerPattChoice) = 0;

  /** Modifies the choice of creation of stagger pattern configuration.
  * @param StaggerPattChoice[in]
  * <br><b>Legal values</b>:
  * <br>TRUE indicates Stagger pattern configuration.
  * <br>FALSE indicates conventional circular pattern configuration.*/
  virtual HRESULT ModifyStaggerPattChoice(boolean StaggerPattChoice) = 0;

	/**
	* Returns if user wants to set the value of Staggered Step half of angular spacing.
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
  * Returns the length of pattern along its radial direction.
  */ 
  virtual double GetLengthr()= 0;

 /**
  * Returns the length of pattern along its axial direction.
  */ 
  virtual double GetLengtha() = 0;

 /**
  * Gets the length parameter of pattern along its radial direction.
  */
  virtual CATICkeParm_var GetParmLengthr() = 0;

 /**
  * Gets the length parameter of pattern along its axial direction.
  */
  virtual CATICkeParm_var GetParmLengtha() = 0;

  /**
  * Sets the stagger step parameter of circular pattern.
  * @param ihStaggerStep
  * The parameter that specifies the value of stagger step.
  */
  virtual HRESULT ModifyStaggerStep(const CATICkeParm_var & ihStaggerStep) = 0;

};

CATDeclareHandler (CATICircPatt, CATIPrtPattern); 

#endif // CATICircPatt_H
