#ifndef CATISchAppCmdInfo_H
#define CATISchAppCmdInfo_H

//	COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppCmdInfo
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

extern "C" const IID IID_CATISchAppCmdInfo ;

class CATDocument;

/**
 * Interface to manage the definition of command information that is 
 * application specific (such as defaults directory paths,  
 * Tools+Options, etc.) and that is needed by  various Schematic functions. 
 * <b>Role</b>: To retrieve various types of schematic command information. 
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppCmdInfo : public IUnknown
{

  public:  

  /**
  * Get the default component catalog path. 
  * @param oCatalogPath
  *   The default component catalog path.
  */
  virtual HRESULT GetComponentCatalogPath (char **oCatalogPath) = 0;

  /**
  * Use the component catalog resource as defined through Project 
  * management and load the document associated with this resource.
  * @param opDocument
  *   The loaded component catalog document.
  */
  virtual HRESULT GetComponentCatalogDoc (CATDocument *&opDocument) = 0;

  /**
  * Get the default OnOffSheet catalog path.
  * @param oCatalogPath
  *   The default OnOffSheet catalog path.
  */
  virtual HRESULT GetOnOffSheetCatalogPath (char **oCatalogPath) = 0;

  /**
  * Use the OnOffSheet catalog resource as defined through Project 
  * management and load the document associated with this resource.
  * @param opDocument
  *   The loaded OnOffSheet catalog document.
  */
  virtual HRESULT GetOnOffSheetCatalogDoc (CATDocument *&opDocument) = 0;

  /**
  * Get the default LineLists catalog path.
  * @param iLineType
  *   The class of the Line ID for which you want the catalog path.
  *   For example: CATPspPipingLine, CATPspICLoop, CATPspHVACLine.
  * @param oCatalogPath
  *   The default LineLists catalog path for the input class of Line ID.
  */
  virtual HRESULT GetLineListsCatalogPath (const char *iLineType, char **oCatalogPath) = 0;

  /**
  * Return a flag indicating if Part Selection function should be added to
  * the Place Component command.
  * @param oFlag
  *   Flag indicating if Part Selection function should be added to
  *   the Place Component command.  0 means don't add it.  1 means add it.
  */
  virtual HRESULT GetPartSelectionInCompPlace (int *oFlag) = 0;

  /**
  * Get the path where the graphic names .txt files can be found. 
  * @param oGraphicNamesPath
  *   The graphic names path.
  */
  virtual HRESULT GetGraphicNamesPath (char **oGraphicNamesPath) = 0;

  /**
  * Get the default Annotation Break Symbols catalog path. 
  * @param oCatalogPath
  *   The default Annotation Break Symbols catalog path.
  */
  virtual HRESULT GetAnnotationBreakCatalogPath (char **oCatalogPath) = 0;

  /**
  * Use the Annotation Break Symbols catalog resource as defined through Project 
  * management and load the document associated with this resource.
  * @param opDocument
  *   The loaded Annotation Break Symbols catalog document.
  */
  virtual HRESULT GetAnnotationBreakCatalogDoc (CATDocument *&opDocument) = 0;

  /**
  * Get the default Annotation Symbols catalog path. 
  * @param oCatalogPath
  *   The default Annotation Symbols catalog path.
  */
  virtual HRESULT GetAnnotationSymbolsCatalogPath (char **oCatalogPath) = 0;

  /**
  * Use the Annotation Symbols catalog resource as defined through Project 
  * management and load the document associated with this resource.
  * @param opDocument
  *   The loaded Annotation Symbols catalog document.
  */
  virtual HRESULT GetAnnotationSymbolsCatalogDoc (CATDocument *&opDocument) = 0;

};
#endif
