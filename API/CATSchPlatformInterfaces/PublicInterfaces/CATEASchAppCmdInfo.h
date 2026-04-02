#ifndef CATEASchAppCmdInfo_H
#define CATEASchAppCmdInfo_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATSchItfCPP.h"

// System
#include "CATBaseUnknown.h"

class CATDocument;

/**
 * Super class to derive implementation for interface CATISchAppCmdInfo.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppCmdInfo : public CATBaseUnknown
{
  public: 
      
  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppCmdInfo.
   */
  CATEASchAppCmdInfo();
  virtual ~CATEASchAppCmdInfo();  

  /**
  * Get the default component catalog path. 
  * @param oCatalogPath
  *   The default component catalog path.
  */
  virtual HRESULT GetComponentCatalogPath (char **oCatalogPath);

  /**
  * Use the component catalog resource as defined through Project 
  * management and load the document associated with this resource.
  * @param opDocument
  *   The loaded component catalog document.
  */
  virtual HRESULT GetComponentCatalogDoc (CATDocument *&opDocument);

  /**
  * Get the default OnOffSheet catalog path. 
  * @param oCatalogPath
  *   The default OnOffSheet catalog path.
  */
  virtual HRESULT GetOnOffSheetCatalogPath (char **oCatalogPath);

  /**
  * Use the OnOffSheet catalog resource as defined through Project 
  * management and load the document associated with this resource.
  * @param opDocument
  *   The loaded OnOffSheet catalog document.
  */
  virtual HRESULT GetOnOffSheetCatalogDoc (CATDocument *&opDocument);

  /**
  * Get the default LineLists catalog path. 
  * @param iLineType
  *   The class of the Line ID for which you want the catalog path.
  *   For example: CATPspPipingLine, CATPspICLoop, CATPspHVACLine.
  * @param oCatalogPath
  *   The default LineLists catalog path for the input class of Line ID.
  */
  virtual HRESULT GetLineListsCatalogPath (const char *iLineType, char **oCatalogPath);

  /**
  * Return a flag indicating if Part Selection function should be added to
  * the Place Component command.
  * @param oFlag
  *   Flag indicating if Part Selection function should be added to
  *   the Place Component command.  0 means don't add it.  1 means add it.
  */
  virtual HRESULT GetPartSelectionInCompPlace (int *oFlag);

  /**
  * Get the path where the graphic names .txt files can be found. 
  * @param oGraphicNamesPath
  *   The graphic names path.
  */
  virtual HRESULT GetGraphicNamesPath (char **oGraphicNamesPath);

  /**
  * Get the default Annotation Break Symbols catalog path. 
  * @param oCatalogPath
  *   The default Annotation Break Symbols catalog path.
  */
  virtual HRESULT GetAnnotationBreakCatalogPath (char **oCatalogPath);

  /**
  * Use the Annotation Break Symbols catalog resource as defined through Project 
  * management and load the document associated with this resource.
  * @param opDocument
  *   The loaded Annotation Break Symbols catalog document.
  */
  virtual HRESULT GetAnnotationBreakCatalogDoc (CATDocument *&opDocument);

  /**
  * Get the default Annotation Symbols catalog path. 
  * @param oCatalogPath
  *   The default Annotation Symbols catalog path.
  */
  virtual HRESULT GetAnnotationSymbolsCatalogPath (char **oCatalogPath);

  /**
  * Use the Annotation Symbols catalog resource as defined through Project 
  * management and load the document associated with this resource.
  * @param opDocument
  *   The loaded Annotation Symbols catalog document.
  */
  virtual HRESULT GetAnnotationSymbolsCatalogDoc (CATDocument *&opDocument);

  private:
  // do not implement
  CATEASchAppCmdInfo (CATEASchAppCmdInfo &);
  CATEASchAppCmdInfo& operator=(CATEASchAppCmdInfo&);
};

#endif
