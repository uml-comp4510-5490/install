;; Auto-generated. Do not edit!


(when (boundp 'pr2_mechanism_msgs::SwitchControllerFeedback)
  (if (not (find-package "PR2_MECHANISM_MSGS"))
    (make-package "PR2_MECHANISM_MSGS"))
  (shadow 'SwitchControllerFeedback (find-package "PR2_MECHANISM_MSGS")))
(unless (find-package "PR2_MECHANISM_MSGS::SWITCHCONTROLLERFEEDBACK")
  (make-package "PR2_MECHANISM_MSGS::SWITCHCONTROLLERFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude SwitchControllerFeedback.msg.html


(defclass pr2_mechanism_msgs::SwitchControllerFeedback
  :super ros::object
  :slots ())

(defmethod pr2_mechanism_msgs::SwitchControllerFeedback
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(setf (get pr2_mechanism_msgs::SwitchControllerFeedback :md5sum-) "d41d8cd98f00b204e9800998ecf8427e")
(setf (get pr2_mechanism_msgs::SwitchControllerFeedback :datatype-) "pr2_mechanism_msgs/SwitchControllerFeedback")
(setf (get pr2_mechanism_msgs::SwitchControllerFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

")



(provide :pr2_mechanism_msgs/SwitchControllerFeedback "d41d8cd98f00b204e9800998ecf8427e")


