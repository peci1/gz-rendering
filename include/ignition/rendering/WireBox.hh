/*
 * Copyright (C) 2020 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#ifndef IGNITION_RENDERING_WIREBOX_HH_
#define IGNITION_RENDERING_WIREBOX_HH_

#include <string>
#include "ignition/rendering/config.hh"
#include "ignition/rendering/Geometry.hh"
#include "ignition/rendering/Object.hh"
#include "ignition/math/AxisAlignedBox.hh"

namespace ignition
{
  namespace rendering
  {
    inline namespace IGNITION_RENDERING_VERSION_NAMESPACE {
    //
    /// \class WireBox WireBox.hh ignition/rendering/WireBox
    /// \brief Draws a wireframe box.
    class IGNITION_RENDERING_VISIBLE WireBox :
      public virtual Geometry
    {
      /// \brief Destructor
      public: virtual ~WireBox() { }

      /// \brief Set the visibility of the box
      /// \param[in] _visible True to make the box visible, False to hide.
      public: virtual void SetVisible(bool _visible) = 0;

      /// \brief Get the visibility of the box.
      /// \return True if the box is visible.
      public: virtual bool Visible() const = 0;

      /// \brief Set the axis aligned box
      /// \param[in] _box The axis aligned box
      public: virtual void SetBox(const ignition::math::AxisAlignedBox &_box) = 0;

      /// \brief Get the wireframe box.
      /// \return The wireframe box.
      public: virtual ignition::math::AxisAlignedBox Box() const = 0;

      public: virtual void SetVisual(const rendering::VisualPtr &_visual) = 0;
    };
    }
  }
}

#endif
