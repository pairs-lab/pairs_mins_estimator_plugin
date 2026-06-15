# pairs_mins_estimator_plugin

A MINS state-estimator plugin for the PAIRS UAV autonomy stack. It feeds the pose and odometry corrections produced by the MINS (multi-sensor inertial navigation) estimator into the PAIRS estimation manager, letting the multirotor localize from visual-inertial / multi-sensor fusion. The plugin is loaded at runtime by the EstimationManager in `pairs_uav_managers`.

## Contents

- `mins/MinsEstimatorPlugin` — pluginlib state-estimator plugin (`mins::Mins`, with base class `pairs_uav_managers::StateEstimator`), built into the `PairsUavStateEstimators_Mins` library and registered via `estimator_plugins.xml`.
- `custom_configs/pairs_uav_managers.yaml` — example manager configuration that wires the MINS estimator into the managers.

## Install (ROS 1 Noetic)

```bash
sudo apt install ros-noetic-pairs-mins-estimator-plugin
```

This package provides a pluginlib plugin; it has no nodes or launch files of its own. Enable it through the EstimationManager configuration in `pairs_uav_managers`. For a full launch/tmux setup, see [pairs_mins_core](https://github.com/pairs-lab/pairs_mins_core).
