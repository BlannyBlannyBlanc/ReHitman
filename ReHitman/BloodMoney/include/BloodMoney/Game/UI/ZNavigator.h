#pragma once

#include "IGUIElement.h"

namespace Hitman::BloodMoney {
    class ZNavigator : public IGUIElement {
    public:
        //vftable
        virtual void SetText();
        virtual void ForceSetText(const char* psText);

        //data (total size is 0x98, base size is 0x6C)
        char m_sText[12];
        char m_sMoveFocus[12];
        int m_iMoveButton;
        bool m_bReceiveAllInput;
        bool m_bIsLink;
        bool m_bDisable;
        bool m_bTakeFocus;
        bool m_bMouseColiOnHiddenObjects;
        bool m_field8D;
        bool m_field8E;
        bool m_field8F;
        int m_field90;
        int m_field94;
        /**
         * Class list:
         *
         * Class                        Size
         * ----------------------------------
         * ZAgeCheck                    0x98
         * ZBribesNavigator             0x98
         * ZBuyUpgrade                  0x98
         * ZClearSavedAccount           0x98
         * ZContinueToNextMission       0x98
         * ZCreateAccountClass          0x98
         * ZDefaultButton               0x98
         * ZDemoStartTraining           0x98
         * ZMissionCompleted            0x98
         * ZNetworkUpdateYes            0x98
         * ZNewButton                   0x98
         * ZOnlineAgreementAccept       0x98
         * ZQuitGame                    0x98
         * ZCloseWindow                 0x9C
         * ZCompleteMission             0xA0
         * ZNavigatorGeneric            0xA4
         * ZClearLoginNames             0xA4
         * ZLoginNames                  0xA4
         * ZLoadScene                   0xA4
         * ZNetConfig                   0xA8
         * ZCreateProfile               0xB0
         * ZHM3InventoryMenu            0x1FF8
         */
    };
}