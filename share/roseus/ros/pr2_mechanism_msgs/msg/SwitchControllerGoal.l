;; Auto-generated. Do not edit!


(when (boundp 'pr2_mechanism_msgs::SwitchControllerGoal)
  (if (not (find-package "PR2_MECHANISM_MSGS"))
    (make-package "PR2_MECHANISM_MSGS"))
  (shadow 'SwitchControllerGoal (find-package "PR2_MECHANISM_MSGS")))
(unless (find-package "PR2_MECHANISM_MSGS::SWITCHCONTROLLERGOAL")
  (make-package "PR2_MECHANISM_MSGS::SWITCHCONTROLLERGOAL"))

(in-package "ROS")
;;//! \htmlinclude SwitchControllerGoal.msg.html


(defclass pr2_mechanism_msgs::SwitchControllerGoal
  :super ros::object
  :slots (_start_controllers _stop_controllers ))

(defmethod pr2_mechanism_msgs::SwitchControllerGoal
  (:init
   (&key
    ((:start_controllers __start_controllers) (let (r) (dotimes (i 0) (push "" r)) r))
    ((:stop_controllers __stop_controllers) (let (r) (dotimes (i 0) (push "" r)) r))
    )
   (send-super :init)
   (setq _start_controllers __start_controllers)
   (setq _stop_controllers __stop_controllers)
   self)
  (:start_controllers
   (&optional __start_controllers)
   (if __start_controllers (setq _start_controllers __start_controllers)) _start_controllers)
  (:stop_controllers
   (&optional __stop_controllers)
   (if __stop_controllers (setq _stop_controllers __stop_controllers)) _stop_controllers)
  (:serialization-length
   ()
   (+
    ;; string[] _start_controllers
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _start_controllers)) 4
    ;; string[] _stop_controllers
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _stop_controllers)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string[] _start_controllers
     (write-long (length _start_controllers) s)
     (dolist (elem _start_controllers)
       (write-long (length elem) s) (princ elem s)
       )
     ;; string[] _stop_controllers
     (write-long (length _stop_controllers) s)
     (dolist (elem _stop_controllers)
       (write-long (length elem) s) (princ elem s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string[] _start_controllers
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _start_controllers (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _start_controllers i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;; string[] _stop_controllers
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _stop_controllers (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _stop_controllers i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;;
   self)
  )

(setf (get pr2_mechanism_msgs::SwitchControllerGoal :md5sum-) "c3f1879cbb2d6cd8732c0e031574dde5")
(setf (get pr2_mechanism_msgs::SwitchControllerGoal :datatype-) "pr2_mechanism_msgs/SwitchControllerGoal")
(setf (get pr2_mechanism_msgs::SwitchControllerGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
string[] start_controllers
string[] stop_controllers

")



(provide :pr2_mechanism_msgs/SwitchControllerGoal "c3f1879cbb2d6cd8732c0e031574dde5")

