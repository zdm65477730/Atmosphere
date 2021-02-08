/*
 * Copyright (c) 2018-2020 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include <stratosphere.hpp>
#include "htclow_ctrl_state.hpp"

namespace ams::htclow::ctrl {

    class HtcctrlStateMachine {
        private:
            struct ServiceChannelState {
                u32 _00;
                u32 _04;
            };

            static constexpr int MaxChannelCount = 10;

            using MapType = util::FixedMap<impl::ChannelInternalType, ServiceChannelState>;

            static constexpr size_t MapRequiredMemorySize = MapType::GetRequiredMemorySize(MaxChannelCount);
        private:
            u8 m_map_buffer[MapRequiredMemorySize];
            MapType m_map;
            HtcctrlState m_state;
            HtcctrlState m_prev_state;
            os::SdkMutex m_mutex;
        public:
            HtcctrlStateMachine();
    };

}