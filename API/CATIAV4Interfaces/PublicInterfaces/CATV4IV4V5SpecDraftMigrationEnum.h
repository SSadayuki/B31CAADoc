#ifndef CATV4IV4V5SpecDraftMigrationEnum_H
#define CATV4IV4V5SpecDraftMigrationEnum_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
// COPYRIGHT DASSAULT SYSTEMES 2003
//--------------------------------------------------------------------------
// CATV4IV4V5SpecDraftMigrationEnum Enum
//--------------------------------------------------------------------------

    /**
     * The mode of migration of draft during Copy/Paste As Spec.
     * @param squareMode
     *   Drafts are migrated using the square mode for ribbon progation.
	 *   This mode is the mode used by default by V4 and Copy/Paste As Spec. 
     * @param coneMode
     *   Drafts are migrated using the cone mode for ribbon progation.
	 *   This mode is the mode used by default by V5.
     * @see CATIV4ISpecV4SettingAtt
     */
enum CATV4IV4V5SpecDraftMigrationEnum{squareMode, coneMode };
#endif
