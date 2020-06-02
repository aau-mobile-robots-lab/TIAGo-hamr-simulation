#include <ignition/math/Pose3.hh>
#include "gazebo/physics/physics.hh"
#include "gazebo/common/common.hh"
#include "gazebo/gazebo.hh"
#include "add_reward_zone.hh"

using namespace gazebo;
// Register this plugin with the simulator
GZ_REGISTER_WORLD_PLUGIN(AddRegion)

AddRegion::AddRegion() {}

void AddRegion::Load(physics::WorldPtr _parent, sdf::ElementPtr _sdf)
{

    this->sdf = _sdf;

    if (_sdf->HasElement("region_103"))
        this->region103 = _sdf->Get<bool>("region_103");
    else
        this->region103 = 0;

    if (_sdf->HasElement("region_104a"))
        this->region104a = _sdf->Get<bool>("region_104a");
    else
        this->region104a = 0;

    if (_sdf->HasElement("region_104b"))
        this->region104b = _sdf->Get<bool>("region_104b");
    else
        this->region104b = 0;

    if (_sdf->HasElement("region_104c"))
        this->region104c = _sdf->Get<bool>("region_104c");
    else
        this->region104c = 0;

    if (_sdf->HasElement("region_105"))
        this->region105 = _sdf->Get<bool>("region_105");
    else
        this->region105 = 0;

    if (_sdf->HasElement("region_107"))
        this->region107 = _sdf->Get<bool>("region_107");
    else
        this->region107 = 0;

    if (_sdf->HasElement("region_109"))
        this->region109 = _sdf->Get<bool>("region_109");
    else
        this->region109 = 0;

    if (_sdf->HasElement("region_111"))
        this->region111 = _sdf->Get<bool>("region_111");
    else
        this->region111 = 0;

    if (_sdf->HasElement("region_113a"))
        this->region113a = _sdf->Get<bool>("region_113a");
    else
        this->region113a = 0;

    if (_sdf->HasElement("region_113b"))
        this->region113b = _sdf->Get<bool>("region_113b");
    else
        this->region113b = 0;

    if (region103)
    {
        // _parent->InsertModelFile("model://reward_zone");
        sdf::SDF setRegion103;
        setRegion103.SetFromString(
        "<sdf version ='1.4'>\
        <include>\
            <uri>model://reward_zone</uri>\
            <pose frame = "">-6.5 8.5 0 0 0 0</pose>\
        </include>\
        </sdf>");

        sdf::ElementPtr model = setRegion103.Root()->GetElement("model");
        model->GetAttribute("name")->SetFromString("Region_103");
        _parent->InsertModelSDF(setRegion103);
    }

    if (region104a)
    {
        sdf::SDF setRegion104a;
        setRegion104a.SetFromString(
        "<sdf version ='1.4'>\
        <include>\
            <uri>model://reward_zone</uri>\
            <pose frame = "">-6.5 2.5 0 0 0 0</pose>\
        </include>\
        </sdf>");

        sdf::ElementPtr model = setRegion104a.Root()->GetElement("model");
        model->GetAttribute("name")->SetFromString("Region_104a");
        _parent->InsertModelSDF(setRegion104a);
    }

    if (region104b)
    {
        sdf::SDF setRegion104b;
        setRegion104b.SetFromString(
        "<sdf version ='1.4'>\
        <include>\
            <uri>model://reward_zone</uri>\
            <pose frame = "">2 2.5 0 0 0 0</pose>\
        </include>\
        </sdf>");

        sdf::ElementPtr model = setRegion104b.Root()->GetElement("model");
        model->GetAttribute("name")->SetFromString("Region_104b");
        _parent->InsertModelSDF(setRegion104b);
    }

    if (region104c)
    {
        sdf::SDF setRegion104c;
        setRegion104c.SetFromString(
        "<sdf version ='1.4'>\
        <include>\
            <uri>model://reward_zone</uri>\
            <pose frame = "">2 -8 0 0 0 0</pose>\
        </include>\
        </sdf>");

        sdf::ElementPtr model = setRegion104c.Root()->GetElement("model");
        model->GetAttribute("name")->SetFromString("Region_104c");
        _parent->InsertModelSDF(setRegion104c);
    }

    if (region105)
    {
        sdf::SDF setRegion105;
        setRegion105.SetFromString(
        "<sdf version ='1.4'>\
        <include>\
            <uri>model://reward_zone</uri>\
            <pose frame = "">0 8.5 0 0 0 0</pose>\
        </include>\
        </sdf>");

        sdf::ElementPtr model = setRegion105.Root()->GetElement("model");
        model->GetAttribute("name")->SetFromString("Region_105");
        _parent->InsertModelSDF(setRegion105);
    }

    if (region107)
    {
        sdf::SDF setRegion107;
        setRegion107.SetFromString(
        "<sdf version ='1.4'>\
        <include>\
            <uri>model://reward_zone</uri>\
            <pose frame = "">4.5 8.5 0 0 0 0</pose>\
        </include>\
        </sdf>");

        sdf::ElementPtr model = setRegion107.Root()->GetElement("model");
        model->GetAttribute("name")->SetFromString("Region_107");
        _parent->InsertModelSDF(setRegion107);
    }

    if (region109)
    {
        sdf::SDF setRegion109;
        setRegion109.SetFromString(
        "<sdf version ='1.4'>\
        <include>\
            <uri>model://reward_zone</uri>\
            <pose frame = "">9 8.5 0 0 0 0</pose>\
        </include>\
        </sdf>");

        sdf::ElementPtr model = setRegion109.Root()->GetElement("model");
        model->GetAttribute("name")->SetFromString("Region_109");
        _parent->InsertModelSDF(setRegion109);
    }

    if (region111)
    {
        sdf::SDF setRegion111;
        setRegion111.SetFromString(
        "<sdf version ='1.4'>\
        <include>\
            <uri>model://reward_zone</uri>\
            <pose frame = "">8 2.5 0 0 0 0</pose>\
        </include>\
        </sdf>");

        sdf::ElementPtr model = setRegion111.Root()->GetElement("model");
        model->GetAttribute("name")->SetFromString("Region_111");
        _parent->InsertModelSDF(setRegion111);
    }

    if (region113a)
    {
        sdf::SDF setRegion113a;
        setRegion113a.SetFromString(
        "<sdf version ='1.4'>\
        <include>\
            <uri>model://reward_zone</uri>\
            <pose frame = "">8 -4 0 0 0 0</pose>\
        </include>\
        </sdf>");

        sdf::ElementPtr model = setRegion113a.Root()->GetElement("model");
        model->GetAttribute("name")->SetFromString("Region_113a");
        _parent->InsertModelSDF(setRegion113a);
    }

    if (region113b)
    {
        sdf::SDF setRegion113b;
        setRegion113b.SetFromString(
        "<sdf version ='1.4'>\
        <include>\
            <uri>model://reward_zone</uri>\
            <pose frame = "">8 -9.5 0 0 0 0</pose>\
        </include>\
        </sdf>");

        sdf::ElementPtr model = setRegion113b.Root()->GetElement("model");
        model->GetAttribute("name")->SetFromString("Region_113b");
        _parent->InsertModelSDF(setRegion113b);
    }

    // if (insertBox)
    // // Option 1: Insert model from file via function call.
    // // The filename must be in the GAZEBO_MODEL_PATH environment variable.
    // {
    //     _parent->InsertModelFile("model://box");
    // }
}
