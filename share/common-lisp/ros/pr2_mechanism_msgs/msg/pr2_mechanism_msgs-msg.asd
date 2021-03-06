
(cl:in-package :asdf)

(defsystem "pr2_mechanism_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "ActuatorStatistics" :depends-on ("_package_ActuatorStatistics"))
    (:file "_package_ActuatorStatistics" :depends-on ("_package"))
    (:file "ControllerStatistics" :depends-on ("_package_ControllerStatistics"))
    (:file "_package_ControllerStatistics" :depends-on ("_package"))
    (:file "JointStatistics" :depends-on ("_package_JointStatistics"))
    (:file "_package_JointStatistics" :depends-on ("_package"))
    (:file "MechanismStatistics" :depends-on ("_package_MechanismStatistics"))
    (:file "_package_MechanismStatistics" :depends-on ("_package"))
    (:file "SwitchControllerAction" :depends-on ("_package_SwitchControllerAction"))
    (:file "_package_SwitchControllerAction" :depends-on ("_package"))
    (:file "SwitchControllerActionFeedback" :depends-on ("_package_SwitchControllerActionFeedback"))
    (:file "_package_SwitchControllerActionFeedback" :depends-on ("_package"))
    (:file "SwitchControllerActionGoal" :depends-on ("_package_SwitchControllerActionGoal"))
    (:file "_package_SwitchControllerActionGoal" :depends-on ("_package"))
    (:file "SwitchControllerActionResult" :depends-on ("_package_SwitchControllerActionResult"))
    (:file "_package_SwitchControllerActionResult" :depends-on ("_package"))
    (:file "SwitchControllerFeedback" :depends-on ("_package_SwitchControllerFeedback"))
    (:file "_package_SwitchControllerFeedback" :depends-on ("_package"))
    (:file "SwitchControllerGoal" :depends-on ("_package_SwitchControllerGoal"))
    (:file "_package_SwitchControllerGoal" :depends-on ("_package"))
    (:file "SwitchControllerResult" :depends-on ("_package_SwitchControllerResult"))
    (:file "_package_SwitchControllerResult" :depends-on ("_package"))
  ))