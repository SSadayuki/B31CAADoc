//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#ifndef CATIIniSearchEngine_H
#define CATIIniSearchEngine_H

#include "CATInteractiveInterfaces.h"
#include "CATBaseUnknown.h"

#include "CATIIniSearchCriterion.h"
#include "CATIIniSearchContext.h"

#include "CATUnicodeString.h"

// Global Unique IDentifier defined in .cpp 
extern ExportedByCATInteractiveInterfaces IID IID_CATIIniSearchEngine;
class CATDocument;
class CATSO;

/**
 * Interface to launch the search engine and retrieve the results.
 * <b>Role:</b> This interface enables the user to launch the search
 * engine with the given criterion, context, and possibly document.
 * <br>The results can be retrieved as a pointer to a @href CATSO instance.
 */
class ExportedByCATInteractiveInterfaces CATIIniSearchEngine : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /** 
   * Sets up the necessary data.
   * <br><b>Role</b>: This method sets up the necessary criterion and context.
   * <br>Those data are vital for appropriatly launching the search engine.
   * <br>If iContext is NULL, the default context will be applied ( @href CATIIniSearchContext#InUIActiveObject ).
   * @param iCriterion
   *    The criterion to which objects will be confronted.
   * @param iContext
   *    The context to determine which objects will be confronted to the criterion.
   *    If iContext is NULL, the default context will apply.
   * @return
   *    <ul><li>E_FAIL if iCriterion is NULL.</li>
   *    <li>S_OK otherwise.</li></ul>
   */
  virtual HRESULT SetCriterionAndContext(const CATIIniSearchCriterion* iCriterion,
                                         const CATIIniSearchContext* iContext) = 0;


  /**
    * Launches the Search process.
    * <br><b>Role</b>: This method launches the Search process for the criterion 
    * and context has specified in the @href #SetCriterionAndContext method,
    * and for the specified Document.
    * <br>If no document is specified, the current document is being used.
    * @param iDocument
    *    The document in which the Search will take place.
    *    <br>If no document is specified, the current document is being used.
    * @return 
    *    S_OK always.
    */
  virtual HRESULT LaunchSearchOnDocument(const CATDocument* iDocument = NULL) = 0;

  /**
   * Retrieves the list of found objects.
   * <br><b>Role</b>: This method enables to retrieve the list of objects that 
   * are matching the input criterion, in the input context, and in the
   * specified document.
   * @param oListOfFoundObjects
   *    The list of found objects
   * @return
   *    <ul><li>E_FAIL if no element has been found.</li>
   *    <li>S_OK otherwise.</li></ul>
   */
  virtual HRESULT GetFoundObjects(CATSO*& oListOfFoundObjects) = 0;

}; 
#endif
