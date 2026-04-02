/* COPYRIGHT DASSAULT SYSTEMES 2006 */
/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */
#ifndef CATIUExitDRMEditorFactory_H
#define CATIUExitDRMEditorFactory_H

#include "CATBaseUnknown.h"

/**
 * Interface to customize interactive panel displayed for DRM information.
 */

#include "CATInteractiveInterfaces.h"

extern ExportedByCATInteractiveInterfaces IID IID_CATIUExitDRMEditorFactory;


#define FRAME_DESCRIPTOR_ABOUT            1
#define FRAME_DESCRIPTOR_EDITRIGHTS       2
#define FRAME_DESCRIPTOR_ADDITIONAL       3


class CATDlgFrame;

class ExportedByCATInteractiveInterfaces CATIUExitDRMEditorFactory : public CATBaseUnknown
{ 
  CATDeclareInterface;

  public:

    /**
	 *	Create a frame with about information on DRM User exit
    * @param iParentFrame [in]
    *    the parent frame to use to build your dialog objects
    * @return
    *   <b>Legal values</b>:
    *   <br><tt> S_OK :</tt>on Success.
    *   <br><tt> E_FAIL:</tt>on Fail
    */
    virtual HRESULT BuildAboutFrame(CATDlgFrame *iParentFrame) = 0;

    /**
	 *	Create a frame to change rights on one document.
    * @param iParentFrame [in]
    *    the parent frame to use to build your dialog objects
    * @param  iDRMAuthorization [in]
    *  Buffer containing the DRM Authorization data to edit.
    * @param iDRMAuthorizationSize [in]
    *   the size of the DRM Authorization data to edit.
    * @param oCreatedFrame [out]
    *    the created frame, it should implement @href CATIUExitDRMEditorFrame to be able to validate modifications.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt> S_OK :</tt>on Success.
    *   <br><tt> E_FAIL:</tt>on Fail
    */
    virtual HRESULT BuildEditRightFrame(CATDlgFrame *iParentFrame,
                                        const void *iDRMAuthorization,
                                        size_t iDRMAuthorizationSize,
                                        CATDlgFrame **oCreatedFrame) = 0;

    /**
    *	Allow the implementation to show more specific details about the document. 
    * @param iParentFrame [in]
    *    the parent frame to be used to build your dialog objects
    * @param iCurrentDoc  [in]
    *    a CATBaseUnkwown object that will allow to retrieve the object extending CATIUExitDRMDocument and CATIUExitDRMAuthorization
    * @return
    *   <b>Legal values</b>:
    *   <br><tt> S_OK :</tt>on Success.
    *   <br><tt> E_FAIL:</tt>on Fail
    */
   virtual HRESULT FillAdditionalInformationFrame(CATDlgFrame *iParentFrame, CATBaseUnknown *iCurrentDoc ) = 0;

    /**
    *	Ask what the current implementation is able to show. If the answer is no then the button is hidden. 
    * @param iFrameDescriptor [in]
    *    a frame descriptor, possible values are FRAME_DESCRIPTOR_ABOUT,FRAME_DESCRIPTOR_EDITRIGHTS or FRAME_DESCRIPTOR_ADDITIONAL
    * @param iIsAble [in]
    *    must be set to TRUE if your implementation is able to show the frame asked with iFrameDescriptor, FALSE if not.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt> S_OK :</tt>on Success.
    *   <br><tt> E_FAIL:</tt>on Fail
    */
   virtual HRESULT IsAbletoShow(int iFrameDescriptor, CATBoolean& iIsAble) = 0;

};
CATDeclareHandler(CATIUExitDRMEditorFactory, CATBaseUnknown);

#endif      
