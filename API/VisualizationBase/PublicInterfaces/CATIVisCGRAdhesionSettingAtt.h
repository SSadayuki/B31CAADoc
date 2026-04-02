//===========================================================================
// COPYRIGHT DASSAULT SYSTEMES 2007                                         
//===========================================================================

#ifndef __CATIVISCGRADHESIONSETTINGATT
#define __CATIVISCGRADHESIONSETTINGATT
#include "CATViz.h"
#include "CATBaseUnknown.h"   
#include "CATISysSettingController.h"

// COPYRIGHT DASSAULT SYSTEMES 2007
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

class CATString;
class CATUnicodeString;
class CATSettingRepository;
class CATSettingInfo;


#ifndef LOCAL_DEFINITION_FOR_IID
extern "C" ExportedByCATViz IID IID_CATIVisCGRAdhesionSettingAtt;
#else
extern "C" const IID IID_CATIVisCGRAdhesionSettingAtt;
#endif


/**
* Interface to handle the activation state of the CGR containers.
* <br>This interface defines:
* <ul>
* <li>A method to set each parameter</li>
* <li>A method to get the value of each parameter</li>
* <li>A method to lock/unlock each parameter</li>
* <li>A method to retrieve the informations concerning each parameter</li>
* </ul>
*/
class ExportedByCATViz CATIVisCGRAdhesionSettingAtt : public CATBaseUnknown
{
   CATDeclareInterface;

public :

   /**
   * Retrieves the V4_Model_CommentPage container activation state.
   */
   virtual HRESULT GetV4_Model_CommentPage (unsigned char &oActivated)=0;

   /**
   * Sets the V4_Model_CommentPage container activation state.
   */
   virtual HRESULT SetV4_Model_CommentPage (unsigned char iActivated)=0;

   /** 
   * Retrieves information about the V4_Model_CommentPage container activation state.
   * <br>Refer to @href CATSysSettingController for a detailed description.
   */
   virtual HRESULT GetV4_Model_CommentPageInfo (CATSettingInfo* oInfo)=0;

   /** 
   * Locks or unlocks the V4_Model_CommentPage container activation state.
   * <br>Refer to @href CATSysSettingController for a detailed description.
   */
   virtual HRESULT SetV4_Model_CommentPageLock (unsigned char iLock)=0;




   /**
   * Retrieves the V4_Model_LnF container activation state.
   */
   virtual HRESULT GetV4_Model_LnF (unsigned char &oActivated)=0;

   /**
   * Sets the V4_Model_LnF container activation state.
   */
   virtual HRESULT SetV4_Model_LnF (unsigned char iActivated)=0;

   /** 
   * Retrieves information about the V4_Model_LnF container activation state.
   * <br>Refer to @href CATSysSettingController for a detailed description.
   */
   virtual HRESULT GetV4_Model_LnFInfo (CATSettingInfo* oInfo)=0;

   /** 
   * Locks or unlocks the V4_Model_LnF container activation state.
   * <br>Refer to @href CATSysSettingController for a detailed description.
   */
   virtual HRESULT SetV4_Model_LnFLock (unsigned char iLock)=0;




   /**
   * Retrieves the V5_SPA container activation state.
   */
   virtual HRESULT GetV5_SPA (unsigned char &oActivated)=0;

   /**
   * Sets the V5_SPA container activation state.
   */
   virtual HRESULT SetV5_SPA (unsigned char iActivated)=0;

   /** 
   * Retrieves information about the V5_SPA container activation state.
   * <br>Refer to @href CATSysSettingController for a detailed description.
   */
   virtual HRESULT GetV5_SPAInfo (CATSettingInfo* oInfo)=0;

   /** 
   * Locks or unlocks the V5_SPA container activation state.
   * <br>Refer to @href CATSysSettingController for a detailed description.
   */
   virtual HRESULT SetV5_SPALock (unsigned char iLock)=0;




   /**
   * Retrieves the V4V5_FDT container activation state.
   */
   virtual HRESULT GetV4V5_FDT (unsigned char &oActivated)=0;

   /**
   * Sets the V4V5_FDT container activation state.
   */
   virtual HRESULT SetV4V5_FDT (unsigned char iActivated)=0;

   /** 
   * Retrieves information about the V4V5_FDT container activation state.
   * <br>Refer to @href CATSysSettingController for a detailed description.
   */
   virtual HRESULT GetV4V5_FDTInfo (CATSettingInfo* oInfo)=0;

   /** 
   * Locks or unlocks the V4V5_FDT container activation state.
   * <br>Refer to @href CATSysSettingController for a detailed description.
   */
   virtual HRESULT SetV4V5_FDTLock (unsigned char iLock)=0;


   /**
   * Retrieves the Voxels container activation state.
   */
   virtual HRESULT GetVoxels (unsigned char &oActivated)=0;

   /**
   * Sets the Voxels container activation state.
   */
   virtual HRESULT SetVoxels (unsigned char iActivated)=0;

   /** 
   * Retrieves information about the Voxels container activation state.
   * <br>Refer to @href CATSysSettingController for a detailed description.
   */
   virtual HRESULT GetVoxelsInfo (CATSettingInfo* oInfo)=0;

   /** 
   * Locks or unlocks the Voxels container activation state.
   * <br>Refer to @href CATSysSettingController for a detailed description.
   */
   virtual HRESULT SetVoxelsLock (unsigned char iLock)=0;
};

#endif


