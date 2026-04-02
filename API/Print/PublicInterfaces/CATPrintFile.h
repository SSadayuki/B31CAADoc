#ifndef CATPRINTFILE_H
#define CATPRINTFILE_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrint.h"

#include "CATBaseUnknown.h"
#include "CATString.h"

class CATPrintImage;

/**
 * Class to create a typed file for printing.
 * <br><b>Role</b>: If the language is not precised, the extension ".*" of the
 * filename is parsed.
 */
class ExportedByCATPrint CATPrintFile : public CATBaseUnknown
{
    CATDeclareClass;

public:

/**
 * Constructs a CATPrintFile.
 * @param iPath
 *   The path of the file.
 * @param iLanguage
 *   The language of the file.
 *  <br>The available languages used in CATIA are:
 * <ul>
 * <li>For Windows:</li>
 * <ul>
 * <li>"CGM", </li> 
 * <li>"RASTER", </li>
 * <li>"EMF" (Windows Metafile), </li>
 * <li>"EPS" (Generic PostScript). </li>
 * </ul>
 * <li>For UNIX:</li>
 * <ul>
 * <li>"CGM",</li> 
 * <li>  "RASTER", </li> 
 * <li>"EPS" (Generic PostScript), </li> 
 * <li>"HPGL2" (Generic HP-GL/2 RTL),</li> 
 * <li>"HP1000GL2" (HP DesignJet 1000 Series), </li> 
 * <li>"OCE", </li> 
 * <li>"GBR" (Gerber).</li> 
 * </ul>
 * </ul>
 * @param iPrivateData
 *   The possible private data to transmit.
 */
    CATPrintFile(const CATString& iPath, const CATString& iLanguage, const void* iPrivateData = NULL);
    virtual ~CATPrintFile();

/**
 * Returns the path.
 * @return
 *   The path of the file.
 */
    const CATString& GetPath(void) const;

/**
 * Returns the language.
 * @return
 *   The language of the file.
 */
    const CATString& GetLanguage(void) const;

/**
 * Creates a printable image from the file.
 * @return
 *   The printable image created.
 */
    CATPrintImage* CreatePrintableImage(void);
    
private:

    CATString   _path, _language;
};

#endif
