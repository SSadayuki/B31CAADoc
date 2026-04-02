#ifndef CATPRINTFILEGENERATOR_H
#define CATPRINTFILEGENERATOR_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATIAV5Level.h"
#include "CATPrintBase.h"
#include "CATPrintGenerator.h"

#if defined(CATIAV5R8) && !defined(__ibmxl__)
class ostrstream;
#endif
class ostream_withassign;
class CATString;
class CATPrintStream;

/** @c++ansi fbq 2004-08-04.10:48:49 [Provide implementation for ostream_withassign - not available in ANSI streams] **/
#ifdef _CAT_ANSI_STREAMS
#include <iostream.h>

/**
 * @nodoc
 */
class ostream_withassign : public ostream
{
public:
/**
 * @nodoc
 */
    ostream_withassign() : ostream(NULL) {}
/**
 * @nodoc
 */
    ostream_withassign(const ostream& os) : ostream(os.rdbuf()) {}
/**
 * @nodoc
 */
    ostream& operator=(const ostream& os) { this->rdbuf(os.rdbuf()); return *this; }
/**
 * @nodoc
 */
    ostream& operator=(streambuf* sb) { this->rdbuf(sb); return *this; }
};
#endif // _CAT_ANSI_STREAMS

/**
 * Class to create generators with driver dynamic-loading.
 */
class ExportedByCATPrintBase CATPrintFileGenerator : public CATPrintGenerator
{

public:

/**
 * Constructs a CATPrintFileGenerator of a given language.
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
 */
    CATPrintFileGenerator(const CATString& iLanguage);
    virtual ~CATPrintFileGenerator();
   
/**
 * Attaches the generator to the specified stream.
 * @param iStream
 *   The stream attached to the generator. @href #_out = iStream
 */
    virtual void Attach(CATPrintStream& iStream);

#ifdef CATIAV5R8
/**
 * @nodoc
 */
    void Attach(ostrstream& os);
#endif

private:  
    ostream_withassign* _pout;

protected:
    /**
    * Stream attachs to the generator.
    * This variable is set in the @href #Attach method 
    */  
    ostream_withassign& _out;

private:
    unsigned char _attached;
    char* _previousLocale;

public:

   void Begin(const CATPrintParameters& iParameters,const CATUnicodeString& iPageTitle);
   void Begin(const CATPrintParameters& iParameters);
   void End();

};

#endif


