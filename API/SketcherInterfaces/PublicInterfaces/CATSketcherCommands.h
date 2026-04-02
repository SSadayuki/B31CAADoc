/* -*-c++-*- */
#ifndef CATSketcherCommands_h
#define CATSketcherCommands_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATListOfCATUnicodeString.h"
#include "CATSketcherInterfaces.h"


class ExportedByCATSketcherInterfaces CATSketcherCommands
{
  public :

  /**
   * List all the command headers of Sketcher workbench
   * @param <tt>oList</tt>
   * [out] List of the command headers.
   * @param <tt>iExcludedList</tt>
   * [in]  List of removed commands of the header
   */
    static void GetListOfCommands(CATListOfCATUnicodeString &oList,CATListOfCATUnicodeString * iExcludedList = NULL);
};
#endif
