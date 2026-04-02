#ifndef CATIDrwSimpleText_H
#define CATIDrwSimpleText_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATIDrwAnnotationComponent.h"


class CATUnicodeString;

class CATIDrwSubText_var;
class CATISpecAttribute_var;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwSimpleText ;
#else
extern "C" const IID IID_CATIDrwSimpleText ;
#endif

/**
* Interface on simple text based objects (balloon,datums,roughness).
*/
class ExportedByDraftingItfCPP CATIDrwSimpleText : public CATIDrwAnnotationComponent
{
  CATDeclareInterface;
  
public:
  
  /**
  * @nodoc
  */
  virtual void GetHVPosition (int& HPosition, int& VPosition) = 0;
  /**
  * @nodoc
  */
  virtual void SetHVPosition (int HPosition, int VPosition) = 0;
  
  /**
  * @nodoc
  */
  virtual int GetWritingDirection ()  = 0;
  /**
  * @nodoc
  */
  virtual void SetWritingDirection (int WriteDirection) = 0;
  
  /**
  * @nodoc
  */
  virtual int GetReadingOrientation ()  = 0;
  /**
  * @nodoc
  */
  virtual void SetReadingOrientation (int ReadDirection) = 0;
  
  /**
  * @nodoc
  */
  virtual int GetJustification ()  = 0;
  /**
  * @nodoc
  */
  virtual void SetJustification (int Justification) = 0;
  
  /**
  * @nodoc
  */
  virtual double GetLineSpacing ()  = 0;
  /**
  * @nodoc
  */
  virtual void SetLineSpacing (double LineSpacing) = 0;
  
  
  /**
  * @nodoc
  */
  virtual CATISpecAttribute_var GetSubTextList () = 0;
  /**
  * Returns the subtext depending on the element.
  * @param NoSubText
  *   From 1 to N.
  *   <br>Balloon, Datum feature have only 1 subtext.
  *   <br>Datum target has 2 subtexts.
  *   <br>Roughness has 6 subtexts.
  * @return
  *   The subtext
  */
  virtual CATIDrwSubText_var    GetSubText (int NoSubText) = 0;
  
  /**
  * @nodoc
  */
  virtual void AddSubText   (int SubTextBefore, int LineNumber, 
    CATIDrwSubText_var SubText) = 0;
  /**
  * @nodoc
  */
  virtual void ModifySubText(int NoSubText, int LineNumber,
    CATIDrwSubText_var NewSubText) = 0;   
  /**
  * @nodoc
  */
  virtual void RemoveSubText(int NoSubText, int LineNumber) = 0;
  
  /**
  * @nodoc
  */
  virtual int GetGlobalScoring () = 0; 
  /**
  * @nodoc
  */
  virtual void SetGlobalScoring (int GlobalTextScoring) = 0; 
  
};

CATDeclareHandler(CATIDrwSimpleText, CATIDrwAnnotationComponent);

#endif
