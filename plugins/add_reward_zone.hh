#ifndef GAZEBO_ADDREGION_PLUGIN_HH_
#define GAZEBO_ADDREGION_PLUGIN_HH_

#include "gazebo/gazebo.hh"
#include "gazebo/common/common.hh"
#include "gazebo/physics/physics.hh"

namespace gazebo
{
    class AddRegion : public WorldPlugin
    {
        public: AddRegion();

        public: void Load(physics::WorldPtr _parent, sdf::ElementPtr _sdf);

        // \brief Pointer to the sdf element.
        private: sdf::ElementPtr sdf;

        private: 
            bool region103;
            bool region104a;
            bool region104b;
            bool region104c;
            bool region105;
            bool region107;
            bool region109;
            bool region111;
            bool region113a;
            bool region113b;
        
        
        
    };
}
#endif