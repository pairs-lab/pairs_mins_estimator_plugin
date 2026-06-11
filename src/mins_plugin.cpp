#include <pairs_uav_state_estimators/estimators/state/state_generic.h>

namespace mins
{

const char estimator_name[] = "mins";
const bool is_core_plugin = false;

class Mins : public pairs_uav_state_estimators::StateGeneric {
public:
  Mins() : pairs_uav_state_estimators::StateGeneric(estimator_name, is_core_plugin) {
  }

  ~Mins(void) {
  }
};

}  // namespace mins

#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(mins::Mins, pairs_uav_managers::StateEstimator)

