#ifndef CATPRINTSTREAM_H
#define CATPRINTSTREAM_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrintBase.h" 
 
#include <fstream.h>
#include "CATUnicodeString.h"

class CATPrintImage;

/**
 * Class to manage i/o on typed file.
 * <br><b>Role</b>: This class is derived from fstream (C++ i/o lib).
 */
class ExportedByCATPrintBase CATPrintStream : public fstream
{
  
public:

/**
 * Constructs a CATPrintStream.
 */
    CATPrintStream();

/**
 * Constructs a CATPrintStream.
 * @param iPath
 *   The path of the stream.
 * @param iLanguage
 *   The language of the stream.
 * @param iPrivateData
 *   The possible private data to transmit.
 */
    CATPrintStream(const CATUnicodeString& iPath, const CATUnicodeString& iLanguage, const void* iPrivateData = NULL);
    virtual ~CATPrintStream();

/**
 * Returns the path.
 * @return
 *   The path of the stream.
 */
    const CATUnicodeString& GetPath(void) const;

/**
 * Returns the language.
 * @return
 *   The language of the stream.
 */
    const CATUnicodeString& GetLanguage(void) const;

/**
 * Returns the possible private data.
 * @return
 *   The possible private data.
 */
    const void* GetPrivateData(void) const;

/**
 * Opens the stream in read mode.
 * @return
 *   The status of the open in read mode.
 *   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
 */
    int  OpenRead(void);

/**
 * Opens the stream in write mode.
 * @return
 *   The status of the open in write mode.
 *   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
 */
    int  OpenWrite(void);

/**
 * Closes the stream.
 */
    void Close(void);
    
private:

    CATUnicodeString _path, _language;
    const void* _privateData;
};

#endif

