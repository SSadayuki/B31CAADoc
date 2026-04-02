#ifndef CATPRINTFILEDEVICE_H
#define CATPRINTFILEDEVICE_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATPrintBase.h"
#include "CATPrintDevice.h"

class CATUnicodeString;
class CATPrintStream;
class CATPrintGenerator;
class CATPrintFileGenerator;

/**
 * Class to create file devices.
 */
class ExportedByCATPrintBase CATPrintFileDevice : public CATPrintDevice
{

public:

/**
 * Constructs a CATPrintFileDevice.
 */
    CATPrintFileDevice();

/**
 * Constructs a CATPrintFileDevice from a given stream output.
 * @param iStream
 *   The stream output.
 */
    CATPrintFileDevice(CATPrintStream* iStream);

/**
 * Constructs a CATPrintFileDevice from a given path file.
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
    CATPrintFileDevice(const CATUnicodeString& iPath, const CATUnicodeString& iLanguage, const void* iPrivateData = 0);
    virtual ~CATPrintFileDevice();

/*
 * Constructs a CATPrintFileDevice from a given generator.
 * @param iPath
 *   The path of the file.
 * @param iGenerator 
 *   The generator corresponding to an available language
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
 CATPrintFileDevice(const CATUnicodeString& iPath, CATPrintFileGenerator*   ipGenerator);

 /**
 * Defines the stream associated to the file device.
 * @param iStream
 *   The stream of the file device.
 */
    void SetFile(CATPrintStream* iStream);

/**
 * Initializes the file device.
 * @param iParameters
 *   The parameters of the generator.
 * @return
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 if file device initialization failed, 
 *   1 otherwise.
 */
    int  Begin(const CATPrintParameters& iParameters);

/**
 * Ends the device.
 */
    void End(void);

/**
 * @nodoc
 */
    enum ApplicationProperties {CATPRINT_BASE, CATPRINT_DRAFTING};

/**
 * @nodoc
 */
    HRESULT SetApplicationPropertiesChoice(CATPrintFileDevice::ApplicationProperties iApplicationProperties);
    
protected:
/**
 * @nodoc
 */
    void RetrieveLanguageProperties(void);

private:

    int              _deleteOutput;
    CATPrintStream*  _output;
    ApplicationProperties  _applicationProperties;
};

#endif










