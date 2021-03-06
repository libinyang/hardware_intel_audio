/*
 * Copyright (C) 2013 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "AudioEffect.hpp"

class AecAudioEffect : public AudioEffect
{
public:
    /**
     * Instantiate an Acoustic Echo Canceller audio effect.
     *
     * @param[in] itfe audio effect interface
     */
    AecAudioEffect(const effect_interface_s *itfe);

private:
    /**
     * Effect Descriptor structure.
     * The effect descriptor contains necessary information to facilitate the enumeration of the
     * effect.
     */
    static const effect_descriptor_t mAecDescriptor;
};
