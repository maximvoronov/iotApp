cmake_minimum_required(VERSION 3.16)

project(IotApp VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)

qt_add_executable(appIotApp
    main.cpp
)

qt_add_qml_module(appIotApp
    URI IotApp
    VERSION 1.0
    QML_FILES main.qml
    RESOURCES
    RESOURCES image.qrc
    SOURCES actuator.cpp actuator.h geo.cpp geo.h IActuator.h iot.cpp iot.h ISensor.h   sensor.cpp sensor.h token.cpp token.h
    SOURCES rxcpp/operators/rx-all.hpp rxcpp/operators/rx-amb.hpp rxcpp/operators/rx-any.hpp rxcpp/operators/rx-buffer_count.hpp rxcpp/operators/rx-buffer_time.hpp rxcpp/operators/rx-buffer_time_count.hpp rxcpp/operators/rx-combine_latest.hpp rxcpp/operators/rx-concat.hpp rxcpp/operators/rx-concat_map.hpp rxcpp/operators/rx-connect_forever.hpp rxcpp/operators/rx-debounce.hpp rxcpp/operators/rx-delay.hpp rxcpp/operators/rx-distinct.hpp rxcpp/operators/rx-distinct_until_changed.hpp rxcpp/operators/rx-element_at.hpp rxcpp/operators/rx-filter.hpp rxcpp/operators/rx-finally.hpp rxcpp/operators/rx-flat_map.hpp rxcpp/operators/rx-group_by.hpp rxcpp/operators/rx-ignore_elements.hpp rxcpp/operators/rx-lift.hpp rxcpp/operators/rx-map.hpp rxcpp/operators/rx-merge.hpp rxcpp/operators/rx-merge_delay_error.hpp rxcpp/operators/rx-multicast.hpp rxcpp/operators/rx-observe_on.hpp rxcpp/operators/rx-on_error_resume_next.hpp rxcpp/operators/rx-pairwise.hpp rxcpp/operators/rx-publish.hpp rxcpp/operators/rx-reduce.hpp rxcpp/operators/rx-ref_count.hpp rxcpp/operators/rx-repeat.hpp rxcpp/operators/rx-replay.hpp rxcpp/operators/rx-retry-repeat-common.hpp rxcpp/operators/rx-retry.hpp rxcpp/operators/rx-sample_time.hpp rxcpp/operators/rx-scan.hpp rxcpp/operators/rx-sequence_equal.hpp rxcpp/operators/rx-skip.hpp rxcpp/operators/rx-skip_last.hpp rxcpp/operators/rx-skip_until.hpp rxcpp/operators/rx-skip_while.hpp rxcpp/operators/rx-start_with.hpp rxcpp/operators/rx-subscribe.hpp rxcpp/operators/rx-subscribe_on.hpp rxcpp/operators/rx-switch_if_empty.hpp rxcpp/operators/rx-switch_on_next.hpp rxcpp/operators/rx-take.hpp rxcpp/operators/rx-take_last.hpp rxcpp/operators/rx-take_until.hpp rxcpp/operators/rx-take_while.hpp rxcpp/operators/rx-tap.hpp rxcpp/operators/rx-time_interval.hpp rxcpp/operators/rx-timeout.hpp rxcpp/operators/rx-timestamp.hpp rxcpp/operators/rx-window.hpp rxcpp/operators/rx-window_time.hpp rxcpp/operators/rx-window_time_count.hpp rxcpp/operators/rx-window_toggle.hpp rxcpp/operators/rx-with_latest_from.hpp rxcpp/operators/rx-zip.hpp rxcpp/schedulers/rx-currentthread.hpp rxcpp/schedulers/rx-eventloop.hpp rxcpp/schedulers/rx-immediate.hpp rxcpp/schedulers/rx-newthread.hpp rxcpp/schedulers/rx-runloop.hpp rxcpp/schedulers/rx-sameworker.hpp rxcpp/schedulers/rx-test.hpp rxcpp/schedulers/rx-virtualtime.hpp rxcpp/sources/rx-create.hpp rxcpp/sources/rx-defer.hpp rxcpp/sources/rx-empty.hpp rxcpp/sources/rx-error.hpp rxcpp/sources/rx-interval.hpp rxcpp/sources/rx-iterate.hpp rxcpp/sources/rx-never.hpp rxcpp/sources/rx-range.hpp rxcpp/sources/rx-scope.hpp rxcpp/sources/rx-timer.hpp rxcpp/subjects/rx-behavior.hpp rxcpp/subjects/rx-replaysubject.hpp rxcpp/subjects/rx-subject.hpp rxcpp/subjects/rx-synchronize.hpp rxcpp/rx-composite_exception.hpp rxcpp/rx-connectable_observable.hpp rxcpp/rx-coordination.hpp rxcpp/rx-coroutine.hpp rxcpp/rx-grouped_observable.hpp rxcpp/rx-includes.hpp rxcpp/rx-lite.hpp rxcpp/rx-notification.hpp rxcpp/rx-observable-fwd.hpp rxcpp/rx-observable.hpp rxcpp/rx-observer.hpp rxcpp/rx-operators.hpp rxcpp/rx-predef.hpp rxcpp/rx-scheduler.hpp rxcpp/rx-sources.hpp rxcpp/rx-subjects.hpp rxcpp/rx-subscriber.hpp rxcpp/rx-subscription.hpp rxcpp/rx-test.hpp rxcpp/rx-trace.hpp rxcpp/rx-util.hpp rxcpp/rx.hpp
    SOURCES
    SOURCES radio1.h radio1.cpp
    SOURCES radio2.h radio2.cpp
    SOURCES IRadio1.h
    SOURCES IRadio2.h
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appIotApp PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appIotApp
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appIotApp
    PRIVATE Qt6::Quick)

include(GNUInstallDirs)
install(TARGETS appIotApp
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
