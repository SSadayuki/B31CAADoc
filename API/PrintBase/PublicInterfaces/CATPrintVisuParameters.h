#ifndef CATPRINTVISUPARAMETERS_H
#define CATPRINTVISUPARAMETERS_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrintBase.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATPrintRenderMode.h"
#include "CATListOfInt.h"
#include "CATListOfCATUnicodeString.h"

class CATMarshalPrintVisuParameters;

/**
 * Class to create a CATPrintVisuParameters object.
 * <b>Role</b>: This class aggregates visualization parameters before
 * printing.
 */
class ExportedByCATPrintBase CATPrintVisuParameters : public CATBaseUnknown
{

	CATDeclareClass;

	friend class CATMarshalPrintVisuParameters;

public:

/**
 * Constructs a default CATPrintVisuParameters.
 */
	CATPrintVisuParameters(void);

/**
 * Copy constructor.
 * @param iVisuParameters
 *   The parameters to be copied.
 */
	CATPrintVisuParameters(const CATPrintVisuParameters& iVisuParameters);
	~CATPrintVisuParameters();

/**
 * @nodoc
 */
	CATPrintVisuParameters& operator= (const CATPrintVisuParameters& iVisuParameters);

/**
 * @nodoc
 */
        CATListOfInt GetImageNumList(void) const;

/**
 * @nodoc
 */
        void SetImageNumList(CATListOfInt iImageNumList);
        
/**
 * @nodoc
 */
        CATListOfCATUnicodeString GetImageNameList(void) const;

/**
 * @nodoc
 */
        void SetImageNameList(CATListOfCATUnicodeString iImageNameList);

/**
 * Returns the clip to sheet flag.
 * @return
 *   The mapping to paper flag (1 if true, 0 either).
 */ 
	int GetClipToSheet(void) const;

/**
 * Sets the clip to sheet flag.
 * If iClipToSheet is true, the image is clipped to the sheet format.
 * If iClipToSheet is false, the image is not clipped.
 * @param iClipToSheet
 *   The clip to sheet flag. 
 *   <br><b>Legal values</b>: 1 if true, 0 either. The default is 0.
 */ 
	void SetClipToSheet(int iClipToSheet);

/**
 * Returns the printing of detail sheets flag.
 * @return
 *   The printing of detail sheets flag (1 if true, 0 either).
 */ 
	int GetPrintDetailSheets(void) const;

/**
 * Sets the printing of detail sheets flag.
 * If iPrintDetailSheets is true, the detail sheets are printed.
 * @param iPrintDetailSheets
 *   The printing of detail sheets flag. 
 *   <br><b>Legal values</b>: 1 if true, 0 either. The default is 0.
 */ 
	void SetPrintDetailSheets(int iPrintDetailSheets);

/**
 * @nodoc
 */
	CATUnicodeString GetPrintFilterName(void) const;

/**
 * @nodoc
 */
	void SetPrintFilterName(CATUnicodeString iPrintFilterName);

/**
 * @nodoc
 */
	CATPrintRenderMode GetPrintRenderMode(void) const;

/**
 * @nodoc
 */
	void SetPrintRenderMode(CATPrintRenderMode iPrintRenderMode);

/**
 * @nodoc
 */
	int GetPrintFilterElement(void) const;

/**
 * @nodoc
 */
	void SetPrintFilterElement(int iPrintFilterElement);
 
/**
 * @nodoc
 */ 
	int GetZoomText(void) const;

/**
 * @nodoc
 */ 
	void SetZoomText(int iZoomText);

/**
 * Returns the use or not of the HLR Polyhedric algorithm.
 * Only available with CATPRINTRENDER_HLR mode.
 * @return
 *   The HLR Polyhedric mode.
 */
        int GetHLRPolyhedric(void) const;

/**
 * Sets the use or not of the HLR Polyhedric algorithm.
 * Only available with CATPRINTRENDER_HLR mode.
 * @param iHLRPolyhedric
 *   <br><b>Legal values</b>: 0 or 1 : The default is 0.
 */
        void SetHLRPolyhedric(int iHLRPolyhedric);

private:

	int   _settingsVersion;		// = 1 
	CATListOfInt   _imageNumList;
        CATListOfCATUnicodeString  _imageNameList;
        int	  _clipToSheet;		// = 1 in "clip to sheet" mode
	int	  _printDetailSheet;	// = 1 in "printDetailSheet" mode
	int	  _zoomText;		// = 1 in "zoom text" mode
	CATUnicodeString _printFilterName;	// = " "
	CATPrintRenderMode _printRenderMode;    // = CATPRINTRENDER_DEFAULT
	int   _printFilterElement;		// = 0 (none)
        int   _hlrPolyhedric;                   // = 0
};

#endif
