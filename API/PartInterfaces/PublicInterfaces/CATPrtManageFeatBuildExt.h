#ifndef CATPrtManageFeatBuildExt_H
#define CATPrtManageFeatBuildExt_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATIPrtManageFeatBuild.h"
#include "PartItf.h"
#include <CATBaseUnknown.h>
#include <CATBody.h>
#include <CATBaseUnknown.h>
#include <CATCGMJournalList.h>
#include <CATListOfCATUnicodeString.h>
#include <CATLISTV_CATBaseUnknown.h>
#include <CATLISTV_CATBaseUnknown.h>
#include <CATMathTransformation.h>

/**
 * Class to implement the interface CATIPrtManageFeatBuild.
 * <b>Role</b>: By inheriting of this class to implement the interface CATIPrtManageFeatBuild,
 * allows users to manage the build of the patterned feature.
 * @see CATIPrtManageFeatBuild 
 */
class ExportedByPartItf CATPrtManageFeatBuildExt : public CATIPrtManageFeatBuild
{
public: 
  
  CATPrtManageFeatBuildExt();
  virtual ~CATPrtManageFeatBuildExt();

 /**
  *  Returns the boolean flag indicating if the build is necessary.
  */  
  virtual CATBoolean BuildNecessity(); 

 /**
  *  Specifies that it is necessary to store the report journal.
  */
  virtual void ReportIsNecessary();

 /**
  *  Specifies that it is not necessary to store the report journal.
  */
  virtual void ReportIsNotNecessary();

 /**
  *  Returns the boolean flag indicating if the report storage is necessary.
  */
  virtual CATBoolean ReportNecessity();

  virtual void DeclarePatternContext();
  virtual void ForgetPatternContext();
  virtual CATBoolean IsInPatternContext();

  /** @nodoc */
  //virtual void TrimIsNecessary();
  /** @nodoc */
  //virtual void TrimIsNotNecessary();
  /** @nodoc */
  //virtual boolean TrimNecessity();

  /** @nodoc */
  virtual void ShapeIsUpToDate();
  /** @nodoc */
  virtual void ShapeIsNotUpToDate();
  /** @nodoc */
  virtual CATBoolean ShapeNecessity();

  /**
  * Sets the computed body.
  * @param iBody
  *  Computed body during the build of the patterned feature.
  */
  virtual void SetBody(CATBody_var iBody);

  /**
   *  Returns the stored body.
   */
  virtual CATBody_var GetBody(int read_only=1);

  /**
  * Sets the topological journal.
  * @param iJournal
  *  Topological journal filled during the build of the patterned feature.
  */
  virtual void SetCurrentJournal(CATCGMJournalList * iJournal);

  /**
  * Returns the stored topological journal.
  */
  virtual CATCGMJournalList * GetCurrentJournal();

  /**
  * Sets the list of operands used by the patterned feature to create the report.
  * @param iSpecs
  *  List of specifications to create the report.
  * @param iKeys
  *  List of keys associated with each specifications.
  */
  virtual void SetOperand(CATListValCATBaseUnknown_var &iSpecs,CATListOfCATUnicodeString &iKeys);

  /**
  * Returns the list of stored operands.
  * @param iSpecs
  *  List of specifications to create the report.
  * @param iKeys
  *  List of keys associated with each specifications.
  */
  virtual void GetOperand(CATListValCATBaseUnknown_var &oSpecs,CATListOfCATUnicodeString &oKeys);

  /** @nodoc */  
  virtual void SetMultiBody(CATListValCATBaseUnknown_var MultiBody);
  /** @nodoc */  
  virtual CATListValCATBaseUnknown_var GetMultiBody();
  /** @nodoc */  
  virtual void SetBodyToPattern(CATBody_var Body);
  /** @nodoc */  
  virtual CATBody_var GetBodyToPattern();

  /**
  * Sets the local transformation of the sketch.
  * @param iTransfo
  *  Local transformation to be applied to the sketch to compute the geometry.
  */ 
  virtual void SetLocalSketchTransfo(CATMathTransformation iTransfo);

  /**
  * Returns the stored local transformation.
  */
  virtual CATMathTransformation GetLocalSketchTransfo();

  /** @nodoc */  
  virtual void SetBothMode(int Both);
  /** @nodoc */
  virtual int IsBothMode();
  /** @nodoc */
  virtual void SetBooleanBody(CATBody* Body);
  /** @nodoc */
  virtual CATBody* GetBooleanBody();
  /** @nodoc */
  virtual void SetBooleanJournal(CATCGMJournalList* Journal);
  /** @nodoc */
  virtual CATCGMJournalList* GetBooleanJournal();
  /** @nodoc */
  virtual void SetUselessOper(int Useless);
  /** @nodoc */
  virtual int IsUselessOper();

  /** @nodoc */
  virtual void Clean();

  /** @nodoc */
  virtual void SetOperatorManager(void* OpMngr);
  /** @nodoc */
  virtual void* GetOperatorManager();
  
  /** @nodoc */
  virtual CATBoolean IsBodyUsedByThisClass(const CATBody_var& ihBody);

protected:

  /** @nodoc */
  void DeclareUseOfBody(CATBody* ipBody);

  /** @nodoc */
  void RemoveBody(CATBody* ipBody);
  /** @nodoc */
  virtual CATBoolean IsBodyUsedElsewhere(const CATBody_var& ihBody);

  /** @nodoc */  
  unsigned int _ScopeFlag:1;
  /** @nodoc */  
  unsigned int _PatternFlag:1;
  /** @nodoc */  
  unsigned int _TrimFlag:1;
  /** @nodoc */  
  unsigned int _ShapeFlag:1;
  /** @nodoc */  
  unsigned int _Both:1;
  /** @nodoc */  
  unsigned int _Useless:1;
  /** @nodoc */  
  unsigned int _IsBoolJournalUsed:1;

  /**
  * The stored body.
  */
  CATBody* _LeBody;

  /**
  * The topological journal.
  */
  CATCGMJournalList* _LeJournal;

  /**
  * List of specifications to create the report.
  */  
  CATListValCATBaseUnknown_var* _ListSpec;

  /**
  * List of keys associated with each specifications.
  */  
  CATListOfCATUnicodeString* _ListKeys;

  /**
  * Local transformation to be applied to the sketch to compute the geometry.
  */  
  CATMathTransformation* _LocalTransfo;  

  /** @nodoc */  
  CATListValCATBaseUnknown_var* _MultiBody;

  /** @nodoc */  
  CATListOfInt _TagsOfUsedBodies;

  /** @nodoc */  
  CATBody* _BodyToPattern;

  /** @nodoc */  
  CATBody* _BoolBody;
  /** @nodoc */  
  CATCGMJournalList* _BoolJournal;
};

#endif // CATPrtManageFeatBuildExt_H
