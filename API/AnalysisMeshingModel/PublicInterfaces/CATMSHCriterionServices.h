#ifndef CATMSHCriterionServices_h
#define CATMSHCriterionServices_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */

#include "MSHModel.h"
#include "IUnknown.h"

class CATIMSHCriterion;
class CATMSHQualityInfos;
class CATSettingRepository;

/**
 * Method to access informations on quality criteria.
 * @see CATIMSHCriterion.
 */
class ExportedByMSHModel CATMSHCriterionServices
{

public:
  /**
   * Retreives a quality criteria from its name.
   * @param iName
   *   The name of the quality criteria.
	 * @return
	 *   The quality criteria.
   */
  static CATIMSHCriterion * GetCriterion ( const char * Name );
  /**
   * @nodoc 
   * Ecriture des critères actifs dans les settings.
   */
  static void WriteToSettings ( CATSettingRepository * Repository, CATMSHQualityInfos * QualInfos );
  /**
   * @nodoc 
   * Lecture des critères actifs dans le fichier utilisateur.
   */
  static CATMSHQualityInfos * ReadFromSettings ( CATSettingRepository * Repository );
  /**
   * @nodoc 
   * Ecriture des critères actifs dans un fichier.
   */
  static HRESULT WriteToFile ( const char * FileName , CATMSHQualityInfos * QualInfos );
  /**
   * @nodoc 
   * Lecture des critères actifs depuis un fichier.
   */
  static HRESULT ReadFromFile ( const char * FileName , CATMSHQualityInfos * QualInfos );
};
#endif
