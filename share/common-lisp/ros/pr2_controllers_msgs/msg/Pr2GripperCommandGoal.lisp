; Auto-generated. Do not edit!


(cl:in-package pr2_controllers_msgs-msg)


;//! \htmlinclude Pr2GripperCommandGoal.msg.html

(cl:defclass <Pr2GripperCommandGoal> (roslisp-msg-protocol:ros-message)
  ((command
    :reader command
    :initarg :command
    :type pr2_controllers_msgs-msg:Pr2GripperCommand
    :initform (cl:make-instance 'pr2_controllers_msgs-msg:Pr2GripperCommand)))
)

(cl:defclass Pr2GripperCommandGoal (<Pr2GripperCommandGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Pr2GripperCommandGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Pr2GripperCommandGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name pr2_controllers_msgs-msg:<Pr2GripperCommandGoal> is deprecated: use pr2_controllers_msgs-msg:Pr2GripperCommandGoal instead.")))

(cl:ensure-generic-function 'command-val :lambda-list '(m))
(cl:defmethod command-val ((m <Pr2GripperCommandGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pr2_controllers_msgs-msg:command-val is deprecated.  Use pr2_controllers_msgs-msg:command instead.")
  (command m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Pr2GripperCommandGoal>) ostream)
  "Serializes a message object of type '<Pr2GripperCommandGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'command) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Pr2GripperCommandGoal>) istream)
  "Deserializes a message object of type '<Pr2GripperCommandGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'command) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Pr2GripperCommandGoal>)))
  "Returns string type for a message object of type '<Pr2GripperCommandGoal>"
  "pr2_controllers_msgs/Pr2GripperCommandGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Pr2GripperCommandGoal)))
  "Returns string type for a message object of type 'Pr2GripperCommandGoal"
  "pr2_controllers_msgs/Pr2GripperCommandGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Pr2GripperCommandGoal>)))
  "Returns md5sum for a message object of type '<Pr2GripperCommandGoal>"
  "86fd82f4ddc48a4cb6856cfa69217e43")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Pr2GripperCommandGoal)))
  "Returns md5sum for a message object of type 'Pr2GripperCommandGoal"
  "86fd82f4ddc48a4cb6856cfa69217e43")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Pr2GripperCommandGoal>)))
  "Returns full string definition for message of type '<Pr2GripperCommandGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%pr2_controllers_msgs/Pr2GripperCommand command~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommand~%float64 position~%float64 max_effort~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Pr2GripperCommandGoal)))
  "Returns full string definition for message of type 'Pr2GripperCommandGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%pr2_controllers_msgs/Pr2GripperCommand command~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommand~%float64 position~%float64 max_effort~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Pr2GripperCommandGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'command))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Pr2GripperCommandGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'Pr2GripperCommandGoal
    (cl:cons ':command (command msg))
))