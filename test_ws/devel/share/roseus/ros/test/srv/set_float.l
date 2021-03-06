;; Auto-generated. Do not edit!


(when (boundp 'test::set_float)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'set_float (find-package "TEST")))
(unless (find-package "TEST::SET_FLOAT")
  (make-package "TEST::SET_FLOAT"))
(unless (find-package "TEST::SET_FLOATREQUEST")
  (make-package "TEST::SET_FLOATREQUEST"))
(unless (find-package "TEST::SET_FLOATRESPONSE")
  (make-package "TEST::SET_FLOATRESPONSE"))

(in-package "ROS")





(defclass test::set_floatRequest
  :super ros::object
  :slots (_value ))

(defmethod test::set_floatRequest
  (:init
   (&key
    ((:value __value) 0.0)
    )
   (send-super :init)
   (setq _value (float __value))
   self)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; float64 _value
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _value
       (sys::poke _value (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _value
     (setq _value (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass test::set_floatResponse
  :super ros::object
  :slots (_success ))

(defmethod test::set_floatResponse
  (:init
   (&key
    ((:success __success) nil)
    )
   (send-super :init)
   (setq _success __success)
   self)
  (:success
   (&optional __success)
   (if __success (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass test::set_float
  :super ros::object
  :slots ())

(setf (get test::set_float :md5sum-) "0f0509b4253b73657cb37e93f4f2960c")
(setf (get test::set_float :datatype-) "test/set_float")
(setf (get test::set_float :request) test::set_floatRequest)
(setf (get test::set_float :response) test::set_floatResponse)

(defmethod test::set_floatRequest
  (:response () (instance test::set_floatResponse :init)))

(setf (get test::set_floatRequest :md5sum-) "0f0509b4253b73657cb37e93f4f2960c")
(setf (get test::set_floatRequest :datatype-) "test/set_floatRequest")
(setf (get test::set_floatRequest :definition-)
      "float64 value
---
bool success

")

(setf (get test::set_floatResponse :md5sum-) "0f0509b4253b73657cb37e93f4f2960c")
(setf (get test::set_floatResponse :datatype-) "test/set_floatResponse")
(setf (get test::set_floatResponse :definition-)
      "float64 value
---
bool success

")



(provide :test/set_float "0f0509b4253b73657cb37e93f4f2960c")


