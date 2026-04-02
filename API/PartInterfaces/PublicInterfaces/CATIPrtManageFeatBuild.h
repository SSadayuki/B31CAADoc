/* -*-c++-*- */
#ifndef CATIPrtManageFeatBuild_H
#define CATIPrtManageFeatBuild_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATPrtManageFeatBuildExt
 */

#include <PartItf.h>
#include <CATBaseUnknown.h>
#include <CATLISTV_CATBaseUnknown.h>
#include "CATMathTransformation.h"
 
class CATCGMJournalList;
class CATISpecObject_var;
class CATBody_var;
class CATBody;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtManageFeatBuild;
#else
extern "C" IID IID_CATIPrtManageFeatBuild;
#endif

/**
 * Interface to store the build informations.
 * <b>Role</b>: This interface allows users to manage the build of the patterned feature.
 * <p><b>BOA information</b>: this interface can be implemented
 * using the BOA (Basic Object Adapter)
 * To know more about the BOA, refer to the CAA Encyclopedia home page
 * Click Middleware at the bottom left, then click the Object Modeler tab page
 * Several articles deal with the BOA.</p>
 */
class ExportedByPartItf CATIPrtManageFeatBuild : public CATBaseUnknown
{
  CATDeclareInterface;
   
public: 
   
 /**
  *  Returns the boolean flag indicating if the build is necessary.
  */
  virtual CATBoolean BuildNecessity() = 0;

 /**
  *  Specifies that it is necessary to store the report journal.
  */
  virtual void ReportIsNecessary() = 0;

 /**
  *  Specifies that it is not necessary to store the report journal.
  */
  virtual void ReportIsNotNecessary() = 0;

 /**
  *  Returns the boolean flag indicating if the report storage is necessary.
  */
  virtual CATBoolean ReportNecessity() = 0;

  /* 
  Pattern of shape management - no more use of ReportNecessity which got tarnished being multi-interpreted this way
  */
  /** @nodoc */
  virtual void DeclarePatternContext()= 0;
  /** @nodoc */
  virtual void ForgetPatternContext()= 0;
  /** @nodoc */
  virtual CATBoolean IsInPatternContext()= 0;

  /** @nodoc */
  virtual void ShapeIsUpToDate() = 0;
  /** @nodoc */
  virtual void ShapeIsNotUpToDate() = 0;
  /** @nodoc */
  virtual CATBoolean ShapeNecessity() = 0;

  /**
  * Sets the computed body.
  * @param iBody
  *  Computed body during the build of the patterned feature.
  */
  virtual void SetBody(CATBody_var iBody) = 0;

  /**
   *  Returns the stored body.
   *  int read_only : 
   *    default _ 1 -> the returned body is not stored/referenced nor used by the caller -> it will be removed from the geometric container by this class
   *            _ 0 -> the returned body is stored/referenced or used by the caller -> it will not be removed from the geometric container by this class. 
   *                                                                                     The caller must do it, or let the geometric container do the clean up at the session end.
   *
   */
  virtual CATBody_var GetBody(int read_only=1) = 0;

  /**
  * Sets the topological journal.
  * @param iJournal
  *  Topological journal filled during the build of the patterned feature.
  */
  virtual void SetCurrentJournal(CATCGMJournalList* iJournal) = 0;

  /**
  * Returns the stored topological journal.
  */
  virtual CATCGMJournalList* GetCurrentJournal() = 0;

  /**
  * Sets the list of operands used by the patterned feature to create the report.
  * @param iSpecs
  *  List of specifications to create the report.
  * @param iKeys
  *  List of keys associated with each specifications.
  */
  virtual void SetOperand(CATListValCATBaseUnknown_var &iSpecs,CATListOfCATUnicodeString &iKeys) = 0;
  
  /**
  * Returns the list of stored operands.
  * @param iSpecs
  *  List of specifications to create the report.
  * @param iKeys
  *  List of keys associated with each specifications.
  */
  virtual void GetOperand(CATListValCATBaseUnknown_var &oSpecs,CATListOfCATUnicodeString &oKeys) = 0;

  /** @nodoc */  
  virtual void SetMultiBody(CATListValCATBaseUnknown_var MultiBody) = 0;
  /** @nodoc */  
  virtual CATListValCATBaseUnknown_var GetMultiBody() = 0;

  /** @nodoc */  
  virtual void SetBodyToPattern(CATBody_var Body) = 0;
  /** @nodoc */
  virtual CATBody_var GetBodyToPattern() = 0;

  /**
  * Sets the local transformation of the sketch.
  * @param iTransfo
  *  Local transformation to be applied to the sketch to compute the geometry.
  */ 
  virtual void SetLocalSketchTransfo(CATMathTransformation iTransfo) = 0;

  /**
  * Returns the stored local transformation.
  */
  virtual CATMathTransformation GetLocalSketchTransfo() = 0;

  /** @nodoc */
  virtual void SetBothMode(int Both) = 0;
  /** @nodoc */
  virtual int IsBothMode() = 0;

  /** @nodoc */
  virtual void SetBooleanBody(CATBody* Body) = 0;
  /** @nodoc */
  virtual CATBody* GetBooleanBody() = 0;
  /** @nodoc */
  virtual void SetBooleanJournal(CATCGMJournalList* Journal) = 0;
  /** @nodoc */
  virtual CATCGMJournalList* GetBooleanJournal() = 0;

  /** @nodoc */
  virtual void SetUselessOper(int Useless) = 0;
  /** @nodoc */
  virtual int IsUselessOper() = 0;

  /** @nodoc */
  virtual void Clean() = 0;

  /** @nodoc */
  virtual void SetOperatorManager(void* OpMngr) = 0;
  /** @nodoc */
  virtual void* GetOperatorManager() = 0;
};

CATDeclareHandler(CATIPrtManageFeatBuild, CATBaseUnknown);

#endif // CATIPrtManageFeatBuild_H





