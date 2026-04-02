#ifndef CATPRINTVIEWERDIALOG_H
#define CATPRINTVIEWERDIALOG_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrint.h"
#include "CATDlgInclude.h"
#include "CATListOfCATPrintImage.h"

class CATNavigation2DViewer;
class CAT2DViewpoint;

class CATPrintImage;
class CATPrintParameters;
class l_CATPrintDialog;
class CATPrintImageViewerDialog;

/**
 * Class to create a print viewer dialog.
 */
class ExportedByCATPrint CATPrintViewerDialog : public CATDlgDialog 
{
   DeclareResource(CATPrintViewerDialog, CATDlgDialog);
   
public:

/**
 * Constructs a CATPrintViewerDialog.
 * @param iFather
 *   The father of the viewer dialog.
 * @param iName
 *   The name of the dialog.
 * @param iImage
 *   The image to be visualized.
 * @param iParameters
 *   The print parameters used.
 */
    CATPrintViewerDialog(CATDialog* iFather, const CATString& iName, CATPrintImage* iImage, const CATPrintParameters& iParameters, l_CATPrintDialog* = NULL);

/**
 * Constructs a CATPrintViewerDialog.
 * @param iFather
 *   The father of the viewer dialog.
 * @param iName
 *   The name of the dialog.
 * @param iImage
 *   The image to be visualized.
 * @param iParameters
 *   The print parameters used.
 */
    CATPrintViewerDialog(CATInteractiveApplication* iFather, const CATString& iName, CATPrintImage* iImage, const CATPrintParameters& iParameters);

/**
 * Constructs a CATPrintViewerDialog.
 * @param iFather
 *   The father of the viewer dialog.
 * @param iName
 *   The name of the dialog.
 * @param iListImages
 *   The list of images to be visualized.
 * @param iParameters
 *   The print parameters used.
 */
    CATPrintViewerDialog(CATDialog* iFather, const CATString& iName, const CATLISTP(CATPrintImage)& iImages, const CATPrintParameters& iParameters, CATListOfCATString* listImagesNames = NULL, l_CATPrintDialog* = NULL);
    
/**
 * Constructs a CATPrintViewerDialog.
 * @param iFather
 *   The father of the viewer dialog.
 * @param iName
 *   The name of the dialog.
 * @param iListImages
 *   The list of images to be visualized.
 * @param iParameters
 *   The print parameters used.
 */
    CATPrintViewerDialog(CATInteractiveApplication* iFather, const CATString& iName, const CATLISTP(CATPrintImage)& iImages, const CATPrintParameters& iParameters, CATListOfCATString* listImagesNames = NULL);

   virtual ~CATPrintViewerDialog();

/**
 * Resets the graphical reps inside the viewer.
 */
   void Reset();
   	
private :

    void BuildWindow(CATPrintImage*, const CATPrintParameters&, l_CATPrintDialog* printDialog=NULL);
    void BuildWindow(const CATLISTP(CATPrintImage)&, const CATPrintParameters&, l_CATPrintDialog* printDialog=NULL);
    
	
    // Callbacks
    void cb_OK(CATCommand*, CATNotification*, CATCommandClientData);

    // Attributes
	int _nbImages;
	CATDlgTabContainer* _imageContainer;
	CATDlgTabPage** _imagePage;
	CATPrintImageViewerDialog** _imageViewer;
	CATLISTV(CATString)* _listImagesNames;
};

#endif










