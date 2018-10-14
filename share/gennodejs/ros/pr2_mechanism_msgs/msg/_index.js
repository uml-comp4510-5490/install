
"use strict";

let SwitchControllerResult = require('./SwitchControllerResult.js');
let SwitchControllerActionResult = require('./SwitchControllerActionResult.js');
let SwitchControllerAction = require('./SwitchControllerAction.js');
let SwitchControllerFeedback = require('./SwitchControllerFeedback.js');
let SwitchControllerActionFeedback = require('./SwitchControllerActionFeedback.js');
let SwitchControllerGoal = require('./SwitchControllerGoal.js');
let SwitchControllerActionGoal = require('./SwitchControllerActionGoal.js');
let ControllerStatistics = require('./ControllerStatistics.js');
let MechanismStatistics = require('./MechanismStatistics.js');
let JointStatistics = require('./JointStatistics.js');
let ActuatorStatistics = require('./ActuatorStatistics.js');

module.exports = {
  SwitchControllerResult: SwitchControllerResult,
  SwitchControllerActionResult: SwitchControllerActionResult,
  SwitchControllerAction: SwitchControllerAction,
  SwitchControllerFeedback: SwitchControllerFeedback,
  SwitchControllerActionFeedback: SwitchControllerActionFeedback,
  SwitchControllerGoal: SwitchControllerGoal,
  SwitchControllerActionGoal: SwitchControllerActionGoal,
  ControllerStatistics: ControllerStatistics,
  MechanismStatistics: MechanismStatistics,
  JointStatistics: JointStatistics,
  ActuatorStatistics: ActuatorStatistics,
};
