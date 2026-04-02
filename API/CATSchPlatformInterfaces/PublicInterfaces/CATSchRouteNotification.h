#ifndef CATSchRouteNotification_H
#define CATSchRouteNotification_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Schematic application routing notification.
 * <b>Role</b>: To assist the creation of a route.
 */

#include "CATBaseUnknown.h"
#include "CATSchNotification.h"
#include "CATSchItfCPP.h"
#include "CATBoolean.h"

class ExportedByCATSchItfCPP CATSchRouteNotification : public CATSchNotification
{
  CATDeclareClass;

  public:

  /**
   * Constructs an empty CATSchRouteNotification.
   */
    CATSchRouteNotification();

    virtual ~CATSchRouteNotification();

    /**
     * Set the data to be sent along with the notification
     * Only the application needs to know the structure. The schematic platform
     * will have no need to try to interpret the data
     * @param iAppData
     *   pointer to the information to be sent with the notification
     *   This method will add reference count to iAppData.
     */
    HRESULT SetApplicationData (const CATBaseUnknown *iAppData);

    /**
     * Get the data to be sent along with the notification
     * Only the application needs to know the structure. The schematic platform
     * will have no need to try to interpret the data
     * @param oAppRouteData [out, CATBaseUnknown#Release]
     *   pointer to the information sent with the notification
     *   calling routine needs to release the output pointer upon finish
     *   using it. The caller must allocate memory for 
     *   the first level pointer (i.e. oAppData) and release the second level
     *   pointer (i.e. *oAppData) after usage.
     */
    HRESULT GetApplicationData (CATBaseUnknown **oAppData);

    /**
     * Set the From and To objects to be sent along with the notification.  
     * The From and To objects will be used by the route command to
     * complete the route.
     * @param iFrom
     *   pointer to the object from which the route will start.  
     * @param iTo
     *   pointer to the object to which the route will end.
     *   This method will add reference count to iFrom and iTo.
     * @param iAutoRoute
     *   Specifies how the route command will perform the route.  
     *   If true, the route will be automatically performed.  If false,
     *   the route command will allow user interaction.
     */
    HRESULT SetFromToObjects (const CATBaseUnknown *iFrom = NULL, const CATBaseUnknown *iTo = NULL,
                              CATBoolean iBAutoRoute = TRUE );

    /**
     * Get the From and To objects to be sent along with the notification.  
     * The From and To objects will be used by the route command to
     * complete the route.
     * @param oFrom  [out, CATBaseUnknown#Release]
     *   pointer to the object from which the route will start.  
     *   The calling routine must release the pointer when finished
     *   using it. 
     * @param oTo [out, CATBaseUnknown#Release]
     *   pointer to the object to which the route will end.  
     *   The calling routine must release the pointer when finished
     *   using it. 
     * @param oAutoRoute
     *   Specifies how the route command will perform the route.  
     *   If true, the route will be automatically performed.  If false, 
     *   the route command will allow user interaction.
     */
    HRESULT GetFromToObjects (CATBaseUnknown **oFrom, CATBaseUnknown **oTo, CATBoolean* oBAutoRoute);



  private:
    CATBaseUnknown *_pBaseUnknownData;
    CATBaseUnknown *_pBUFromObj;
    CATBaseUnknown *_pBUToObj;
    CATBoolean     _BAutoRoute;
};  

#endif
