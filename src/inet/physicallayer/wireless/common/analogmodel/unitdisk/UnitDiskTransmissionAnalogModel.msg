//
// Copyright (C) 2020 OpenSim Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later
//

import inet.common.INETDefs;
import inet.common.Units;

cplusplus {{
#include "inet/physicallayer/wireless/common/analogmodel/unitdisk/UnitDiskTransmissionAnalogModel.h"
}}

namespace inet::physicallayer;

class UnitDiskTransmissionAnalogModel
{
    @existingClass;
    @descriptor(readonly);
    m communicationRange;
    m interferenceRange;
    m detectionRange;
}
