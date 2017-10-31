/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * schema-defined QAPI function prototypes
 *
 * Copyright IBM, Corp. 2011
 *
 * Authors:
 *  Anthony Liguori   <aliguori@us.ibm.com>
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 *
 */

#ifndef QMP_COMMANDS_H
#define QMP_COMMANDS_H

#include "qapi-types.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qmp/dispatch.h"
#include "qapi/error.h"

void qmp_init_marshal(QmpCommandList *cmds);
AddfdInfo *qmp_add_fd(bool has_fdset_id, int64_t fdset_id, bool has_opaque, const char *opaque, Error **errp);
void qmp_marshal_add_fd(QDict *args, QObject **ret, Error **errp);
void qmp_add_client(const char *protocol, const char *fdname, bool has_skipauth, bool skipauth, bool has_tls, bool tls, Error **errp);
void qmp_marshal_add_client(QDict *args, QObject **ret, Error **errp);
void qmp_balloon(int64_t value, Error **errp);
void qmp_marshal_balloon(QDict *args, QObject **ret, Error **errp);
void qmp_block_commit(bool has_job_id, const char *job_id, const char *device, bool has_base, const char *base, bool has_top, const char *top, bool has_backing_file, const char *backing_file, bool has_speed, int64_t speed, bool has_filter_node_name, const char *filter_node_name, Error **errp);
void qmp_marshal_block_commit(QDict *args, QObject **ret, Error **errp);
void qmp_block_dirty_bitmap_add(const char *node, const char *name, bool has_granularity, uint32_t granularity, bool has_persistent, bool persistent, bool has_autoload, bool autoload, Error **errp);
void qmp_marshal_block_dirty_bitmap_add(QDict *args, QObject **ret, Error **errp);
void qmp_block_dirty_bitmap_clear(const char *node, const char *name, Error **errp);
void qmp_marshal_block_dirty_bitmap_clear(QDict *args, QObject **ret, Error **errp);
void qmp_block_dirty_bitmap_remove(const char *node, const char *name, Error **errp);
void qmp_marshal_block_dirty_bitmap_remove(QDict *args, QObject **ret, Error **errp);
void qmp_block_job_cancel(const char *device, bool has_force, bool force, Error **errp);
void qmp_marshal_block_job_cancel(QDict *args, QObject **ret, Error **errp);
void qmp_block_job_complete(const char *device, Error **errp);
void qmp_marshal_block_job_complete(QDict *args, QObject **ret, Error **errp);
void qmp_block_job_pause(const char *device, Error **errp);
void qmp_marshal_block_job_pause(QDict *args, QObject **ret, Error **errp);
void qmp_block_job_resume(const char *device, Error **errp);
void qmp_marshal_block_job_resume(QDict *args, QObject **ret, Error **errp);
void qmp_block_job_set_speed(const char *device, int64_t speed, Error **errp);
void qmp_marshal_block_job_set_speed(QDict *args, QObject **ret, Error **errp);
void qmp_block_set_write_threshold(const char *node_name, uint64_t write_threshold, Error **errp);
void qmp_marshal_block_set_write_threshold(QDict *args, QObject **ret, Error **errp);
void qmp_block_stream(bool has_job_id, const char *job_id, const char *device, bool has_base, const char *base, bool has_base_node, const char *base_node, bool has_backing_file, const char *backing_file, bool has_speed, int64_t speed, bool has_on_error, BlockdevOnError on_error, Error **errp);
void qmp_marshal_block_stream(QDict *args, QObject **ret, Error **errp);
void qmp_block_passwd(bool has_device, const char *device, bool has_node_name, const char *node_name, const char *password, Error **errp);
void qmp_marshal_block_passwd(QDict *args, QObject **ret, Error **errp);
void qmp_block_resize(bool has_device, const char *device, bool has_node_name, const char *node_name, int64_t size, Error **errp);
void qmp_marshal_block_resize(QDict *args, QObject **ret, Error **errp);
void qmp_block_set_io_throttle(BlockIOThrottle *arg, Error **errp);
void qmp_marshal_block_set_io_throttle(QDict *args, QObject **ret, Error **errp);
void qmp_blockdev_add(BlockdevOptions *arg, Error **errp);
void qmp_marshal_blockdev_add(QDict *args, QObject **ret, Error **errp);
void qmp_blockdev_backup(BlockdevBackup *arg, Error **errp);
void qmp_marshal_blockdev_backup(QDict *args, QObject **ret, Error **errp);
void qmp_blockdev_change_medium(bool has_device, const char *device, bool has_id, const char *id, const char *filename, bool has_format, const char *format, bool has_read_only_mode, BlockdevChangeReadOnlyMode read_only_mode, Error **errp);
void qmp_marshal_blockdev_change_medium(QDict *args, QObject **ret, Error **errp);
void qmp_blockdev_close_tray(bool has_device, const char *device, bool has_id, const char *id, Error **errp);
void qmp_marshal_blockdev_close_tray(QDict *args, QObject **ret, Error **errp);
void qmp_blockdev_del(const char *node_name, Error **errp);
void qmp_marshal_blockdev_del(QDict *args, QObject **ret, Error **errp);
void qmp_blockdev_mirror(bool has_job_id, const char *job_id, const char *device, const char *target, bool has_replaces, const char *replaces, MirrorSyncMode sync, bool has_speed, int64_t speed, bool has_granularity, uint32_t granularity, bool has_buf_size, int64_t buf_size, bool has_on_source_error, BlockdevOnError on_source_error, bool has_on_target_error, BlockdevOnError on_target_error, bool has_filter_node_name, const char *filter_node_name, Error **errp);
void qmp_marshal_blockdev_mirror(QDict *args, QObject **ret, Error **errp);
void qmp_blockdev_open_tray(bool has_device, const char *device, bool has_id, const char *id, bool has_force, bool force, Error **errp);
void qmp_marshal_blockdev_open_tray(QDict *args, QObject **ret, Error **errp);
void qmp_blockdev_snapshot(const char *node, const char *overlay, Error **errp);
void qmp_marshal_blockdev_snapshot(QDict *args, QObject **ret, Error **errp);
SnapshotInfo *qmp_blockdev_snapshot_delete_internal_sync(const char *device, bool has_id, const char *id, bool has_name, const char *name, Error **errp);
void qmp_marshal_blockdev_snapshot_delete_internal_sync(QDict *args, QObject **ret, Error **errp);
void qmp_blockdev_snapshot_internal_sync(const char *device, const char *name, Error **errp);
void qmp_marshal_blockdev_snapshot_internal_sync(QDict *args, QObject **ret, Error **errp);
void qmp_blockdev_snapshot_sync(bool has_device, const char *device, bool has_node_name, const char *node_name, const char *snapshot_file, bool has_snapshot_node_name, const char *snapshot_node_name, bool has_format, const char *format, bool has_mode, NewImageMode mode, Error **errp);
void qmp_marshal_blockdev_snapshot_sync(QDict *args, QObject **ret, Error **errp);
void qmp_change(const char *device, const char *target, bool has_arg, const char *arg, Error **errp);
void qmp_marshal_change(QDict *args, QObject **ret, Error **errp);
void qmp_change_backing_file(const char *device, const char *image_node_name, const char *backing_file, Error **errp);
void qmp_marshal_change_backing_file(QDict *args, QObject **ret, Error **errp);
void qmp_change_vnc_password(const char *password, Error **errp);
void qmp_marshal_change_vnc_password(QDict *args, QObject **ret, Error **errp);
ChardevReturn *qmp_chardev_add(const char *id, ChardevBackend *backend, Error **errp);
void qmp_marshal_chardev_add(QDict *args, QObject **ret, Error **errp);
ChardevReturn *qmp_chardev_change(const char *id, ChardevBackend *backend, Error **errp);
void qmp_marshal_chardev_change(QDict *args, QObject **ret, Error **errp);
void qmp_chardev_remove(const char *id, Error **errp);
void qmp_marshal_chardev_remove(QDict *args, QObject **ret, Error **errp);
void qmp_chardev_send_break(const char *id, Error **errp);
void qmp_marshal_chardev_send_break(QDict *args, QObject **ret, Error **errp);
void qmp_client_migrate_info(const char *protocol, const char *hostname, bool has_port, int64_t port, bool has_tls_port, int64_t tls_port, bool has_cert_subject, const char *cert_subject, Error **errp);
void qmp_marshal_client_migrate_info(QDict *args, QObject **ret, Error **errp);
void qmp_closefd(const char *fdname, Error **errp);
void qmp_marshal_closefd(QDict *args, QObject **ret, Error **errp);
void qmp_cont(Error **errp);
void qmp_marshal_cont(QDict *args, QObject **ret, Error **errp);
void qmp_cpu(int64_t index, Error **errp);
void qmp_marshal_cpu(QDict *args, QObject **ret, Error **errp);
void qmp_cpu_add(int64_t id, Error **errp);
void qmp_marshal_cpu_add(QDict *args, QObject **ret, Error **errp);
DevicePropertyInfoList *qmp_device_list_properties(const char *q_typename, Error **errp);
void qmp_marshal_device_list_properties(QDict *args, QObject **ret, Error **errp);
void qmp_device_del(const char *id, Error **errp);
void qmp_marshal_device_del(QDict *args, QObject **ret, Error **errp);
void qmp_drive_backup(DriveBackup *arg, Error **errp);
void qmp_marshal_drive_backup(QDict *args, QObject **ret, Error **errp);
void qmp_drive_mirror(DriveMirror *arg, Error **errp);
void qmp_marshal_drive_mirror(QDict *args, QObject **ret, Error **errp);
void qmp_dump_guest_memory(bool paging, const char *protocol, bool has_detach, bool detach, bool has_begin, int64_t begin, bool has_length, int64_t length, bool has_format, DumpGuestMemoryFormat format, Error **errp);
void qmp_marshal_dump_guest_memory(QDict *args, QObject **ret, Error **errp);
void qmp_dump_skeys(const char *filename, Error **errp);
void qmp_marshal_dump_skeys(QDict *args, QObject **ret, Error **errp);
void qmp_eject(bool has_device, const char *device, bool has_id, const char *id, bool has_force, bool force, Error **errp);
void qmp_marshal_eject(QDict *args, QObject **ret, Error **errp);
void qmp_expire_password(const char *protocol, const char *time, Error **errp);
void qmp_marshal_expire_password(QDict *args, QObject **ret, Error **errp);
void qmp_getfd(const char *fdname, Error **errp);
void qmp_marshal_getfd(QDict *args, QObject **ret, Error **errp);
char *qmp_human_monitor_command(const char *command_line, bool has_cpu_index, int64_t cpu_index, Error **errp);
void qmp_marshal_human_monitor_command(QDict *args, QObject **ret, Error **errp);
void qmp_inject_nmi(Error **errp);
void qmp_marshal_inject_nmi(QDict *args, QObject **ret, Error **errp);
void qmp_input_send_event(bool has_device, const char *device, bool has_head, int64_t head, InputEventList *events, Error **errp);
void qmp_marshal_input_send_event(QDict *args, QObject **ret, Error **errp);
void qmp_memsave(int64_t val, int64_t size, const char *filename, bool has_cpu_index, int64_t cpu_index, Error **errp);
void qmp_marshal_memsave(QDict *args, QObject **ret, Error **errp);
void qmp_migrate(const char *uri, bool has_blk, bool blk, bool has_inc, bool inc, bool has_detach, bool detach, Error **errp);
void qmp_marshal_migrate(QDict *args, QObject **ret, Error **errp);
void qmp_migrate_incoming(const char *uri, Error **errp);
void qmp_marshal_migrate_incoming(QDict *args, QObject **ret, Error **errp);
void qmp_migrate_set_cache_size(int64_t value, Error **errp);
void qmp_marshal_migrate_set_cache_size(QDict *args, QObject **ret, Error **errp);
void qmp_migrate_set_capabilities(MigrationCapabilityStatusList *capabilities, Error **errp);
void qmp_marshal_migrate_set_capabilities(QDict *args, QObject **ret, Error **errp);
void qmp_migrate_set_parameters(MigrateSetParameters *arg, Error **errp);
void qmp_marshal_migrate_set_parameters(QDict *args, QObject **ret, Error **errp);
void qmp_migrate_start_postcopy(Error **errp);
void qmp_marshal_migrate_start_postcopy(QDict *args, QObject **ret, Error **errp);
void qmp_migrate_cancel(Error **errp);
void qmp_marshal_migrate_cancel(QDict *args, QObject **ret, Error **errp);
void qmp_migrate_set_downtime(double value, Error **errp);
void qmp_marshal_migrate_set_downtime(QDict *args, QObject **ret, Error **errp);
void qmp_migrate_set_speed(int64_t value, Error **errp);
void qmp_marshal_migrate_set_speed(QDict *args, QObject **ret, Error **errp);
void qmp_nbd_server_add(const char *device, bool has_writable, bool writable, Error **errp);
void qmp_marshal_nbd_server_add(QDict *args, QObject **ret, Error **errp);
void qmp_nbd_server_start(SocketAddressLegacy *addr, bool has_tls_creds, const char *tls_creds, Error **errp);
void qmp_marshal_nbd_server_start(QDict *args, QObject **ret, Error **errp);
void qmp_nbd_server_stop(Error **errp);
void qmp_marshal_nbd_server_stop(QDict *args, QObject **ret, Error **errp);
void qmp_netdev_del(const char *id, Error **errp);
void qmp_marshal_netdev_del(QDict *args, QObject **ret, Error **errp);
void qmp_object_add(const char *qom_type, const char *id, bool has_props, QObject *props, Error **errp);
void qmp_marshal_object_add(QDict *args, QObject **ret, Error **errp);
void qmp_object_del(const char *id, Error **errp);
void qmp_marshal_object_del(QDict *args, QObject **ret, Error **errp);
void qmp_pmemsave(int64_t val, int64_t size, const char *filename, Error **errp);
void qmp_marshal_pmemsave(QDict *args, QObject **ret, Error **errp);
void qmp_qmp_capabilities(Error **errp);
void qmp_marshal_qmp_capabilities(QDict *args, QObject **ret, Error **errp);
QObject *qmp_qom_get(const char *path, const char *property, Error **errp);
void qmp_marshal_qom_get(QDict *args, QObject **ret, Error **errp);
ObjectPropertyInfoList *qmp_qom_list(const char *path, Error **errp);
void qmp_marshal_qom_list(QDict *args, QObject **ret, Error **errp);
ObjectTypeInfoList *qmp_qom_list_types(bool has_implements, const char *implements, bool has_abstract, bool abstract, Error **errp);
void qmp_marshal_qom_list_types(QDict *args, QObject **ret, Error **errp);
void qmp_qom_set(const char *path, const char *property, QObject *value, Error **errp);
void qmp_marshal_qom_set(QDict *args, QObject **ret, Error **errp);
ACPIOSTInfoList *qmp_query_acpi_ospm_status(Error **errp);
void qmp_marshal_query_acpi_ospm_status(QDict *args, QObject **ret, Error **errp);
BalloonInfo *qmp_query_balloon(Error **errp);
void qmp_marshal_query_balloon(QDict *args, QObject **ret, Error **errp);
BlockInfoList *qmp_query_block(Error **errp);
void qmp_marshal_query_block(QDict *args, QObject **ret, Error **errp);
BlockJobInfoList *qmp_query_block_jobs(Error **errp);
void qmp_marshal_query_block_jobs(QDict *args, QObject **ret, Error **errp);
BlockStatsList *qmp_query_blockstats(bool has_query_nodes, bool query_nodes, Error **errp);
void qmp_marshal_query_blockstats(QDict *args, QObject **ret, Error **errp);
ChardevInfoList *qmp_query_chardev(Error **errp);
void qmp_marshal_query_chardev(QDict *args, QObject **ret, Error **errp);
ChardevBackendInfoList *qmp_query_chardev_backends(Error **errp);
void qmp_marshal_query_chardev_backends(QDict *args, QObject **ret, Error **errp);
CommandLineOptionInfoList *qmp_query_command_line_options(bool has_option, const char *option, Error **errp);
void qmp_marshal_query_command_line_options(QDict *args, QObject **ret, Error **errp);
CommandInfoList *qmp_query_commands(Error **errp);
void qmp_marshal_query_commands(QDict *args, QObject **ret, Error **errp);
CpuDefinitionInfoList *qmp_query_cpu_definitions(Error **errp);
void qmp_marshal_query_cpu_definitions(QDict *args, QObject **ret, Error **errp);
CpuModelBaselineInfo *qmp_query_cpu_model_baseline(CpuModelInfo *modela, CpuModelInfo *modelb, Error **errp);
void qmp_marshal_query_cpu_model_baseline(QDict *args, QObject **ret, Error **errp);
CpuModelCompareInfo *qmp_query_cpu_model_comparison(CpuModelInfo *modela, CpuModelInfo *modelb, Error **errp);
void qmp_marshal_query_cpu_model_comparison(QDict *args, QObject **ret, Error **errp);
CpuModelExpansionInfo *qmp_query_cpu_model_expansion(CpuModelExpansionType type, CpuModelInfo *model, Error **errp);
void qmp_marshal_query_cpu_model_expansion(QDict *args, QObject **ret, Error **errp);
CpuInfoList *qmp_query_cpus(Error **errp);
void qmp_marshal_query_cpus(QDict *args, QObject **ret, Error **errp);
DumpQueryResult *qmp_query_dump(Error **errp);
void qmp_marshal_query_dump(QDict *args, QObject **ret, Error **errp);
DumpGuestMemoryCapability *qmp_query_dump_guest_memory_capability(Error **errp);
void qmp_marshal_query_dump_guest_memory_capability(QDict *args, QObject **ret, Error **errp);
EventInfoList *qmp_query_events(Error **errp);
void qmp_marshal_query_events(QDict *args, QObject **ret, Error **errp);
FdsetInfoList *qmp_query_fdsets(Error **errp);
void qmp_marshal_query_fdsets(QDict *args, QObject **ret, Error **errp);
GICCapabilityList *qmp_query_gic_capabilities(Error **errp);
void qmp_marshal_query_gic_capabilities(QDict *args, QObject **ret, Error **errp);
HotpluggableCPUList *qmp_query_hotpluggable_cpus(Error **errp);
void qmp_marshal_query_hotpluggable_cpus(QDict *args, QObject **ret, Error **errp);
IOThreadInfoList *qmp_query_iothreads(Error **errp);
void qmp_marshal_query_iothreads(QDict *args, QObject **ret, Error **errp);
KvmInfo *qmp_query_kvm(Error **errp);
void qmp_marshal_query_kvm(QDict *args, QObject **ret, Error **errp);
MachineInfoList *qmp_query_machines(Error **errp);
void qmp_marshal_query_machines(QDict *args, QObject **ret, Error **errp);
MemdevList *qmp_query_memdev(Error **errp);
void qmp_marshal_query_memdev(QDict *args, QObject **ret, Error **errp);
MemoryDeviceInfoList *qmp_query_memory_devices(Error **errp);
void qmp_marshal_query_memory_devices(QDict *args, QObject **ret, Error **errp);
MouseInfoList *qmp_query_mice(Error **errp);
void qmp_marshal_query_mice(QDict *args, QObject **ret, Error **errp);
MigrationInfo *qmp_query_migrate(Error **errp);
void qmp_marshal_query_migrate(QDict *args, QObject **ret, Error **errp);
int64_t qmp_query_migrate_cache_size(Error **errp);
void qmp_marshal_query_migrate_cache_size(QDict *args, QObject **ret, Error **errp);
MigrationCapabilityStatusList *qmp_query_migrate_capabilities(Error **errp);
void qmp_marshal_query_migrate_capabilities(QDict *args, QObject **ret, Error **errp);
MigrationParameters *qmp_query_migrate_parameters(Error **errp);
void qmp_marshal_query_migrate_parameters(QDict *args, QObject **ret, Error **errp);
NameInfo *qmp_query_name(Error **errp);
void qmp_marshal_query_name(QDict *args, QObject **ret, Error **errp);
BlockDeviceInfoList *qmp_query_named_block_nodes(Error **errp);
void qmp_marshal_query_named_block_nodes(QDict *args, QObject **ret, Error **errp);
PciInfoList *qmp_query_pci(Error **errp);
void qmp_marshal_query_pci(QDict *args, QObject **ret, Error **errp);
RockerSwitch *qmp_query_rocker(const char *name, Error **errp);
void qmp_marshal_query_rocker(QDict *args, QObject **ret, Error **errp);
RockerOfDpaFlowList *qmp_query_rocker_of_dpa_flows(const char *name, bool has_tbl_id, uint32_t tbl_id, Error **errp);
void qmp_marshal_query_rocker_of_dpa_flows(QDict *args, QObject **ret, Error **errp);
RockerOfDpaGroupList *qmp_query_rocker_of_dpa_groups(const char *name, bool has_type, uint8_t type, Error **errp);
void qmp_marshal_query_rocker_of_dpa_groups(QDict *args, QObject **ret, Error **errp);
RockerPortList *qmp_query_rocker_ports(const char *name, Error **errp);
void qmp_marshal_query_rocker_ports(QDict *args, QObject **ret, Error **errp);
RxFilterInfoList *qmp_query_rx_filter(bool has_name, const char *name, Error **errp);
void qmp_marshal_query_rx_filter(QDict *args, QObject **ret, Error **errp);
SpiceInfo *qmp_query_spice(Error **errp);
void qmp_marshal_query_spice(QDict *args, QObject **ret, Error **errp);
StatusInfo *qmp_query_status(Error **errp);
void qmp_marshal_query_status(QDict *args, QObject **ret, Error **errp);
TargetInfo *qmp_query_target(Error **errp);
void qmp_marshal_query_target(QDict *args, QObject **ret, Error **errp);
TPMInfoList *qmp_query_tpm(Error **errp);
void qmp_marshal_query_tpm(QDict *args, QObject **ret, Error **errp);
TpmModelList *qmp_query_tpm_models(Error **errp);
void qmp_marshal_query_tpm_models(QDict *args, QObject **ret, Error **errp);
TpmTypeList *qmp_query_tpm_types(Error **errp);
void qmp_marshal_query_tpm_types(QDict *args, QObject **ret, Error **errp);
UuidInfo *qmp_query_uuid(Error **errp);
void qmp_marshal_query_uuid(QDict *args, QObject **ret, Error **errp);
VersionInfo *qmp_query_version(Error **errp);
void qmp_marshal_query_version(QDict *args, QObject **ret, Error **errp);
GuidInfo *qmp_query_vm_generation_id(Error **errp);
void qmp_marshal_query_vm_generation_id(QDict *args, QObject **ret, Error **errp);
VncInfo *qmp_query_vnc(Error **errp);
void qmp_marshal_query_vnc(QDict *args, QObject **ret, Error **errp);
VncInfo2List *qmp_query_vnc_servers(Error **errp);
void qmp_marshal_query_vnc_servers(QDict *args, QObject **ret, Error **errp);
ReplicationStatus *qmp_query_xen_replication_status(Error **errp);
void qmp_marshal_query_xen_replication_status(QDict *args, QObject **ret, Error **errp);
void qmp_quit(Error **errp);
void qmp_marshal_quit(QDict *args, QObject **ret, Error **errp);
void qmp_remove_fd(int64_t fdset_id, bool has_fd, int64_t fd, Error **errp);
void qmp_marshal_remove_fd(QDict *args, QObject **ret, Error **errp);
char *qmp_ringbuf_read(const char *device, int64_t size, bool has_format, DataFormat format, Error **errp);
void qmp_marshal_ringbuf_read(QDict *args, QObject **ret, Error **errp);
void qmp_ringbuf_write(const char *device, const char *data, bool has_format, DataFormat format, Error **errp);
void qmp_marshal_ringbuf_write(QDict *args, QObject **ret, Error **errp);
void qmp_rtc_reset_reinjection(Error **errp);
void qmp_marshal_rtc_reset_reinjection(QDict *args, QObject **ret, Error **errp);
void qmp_screendump(const char *filename, Error **errp);
void qmp_marshal_screendump(QDict *args, QObject **ret, Error **errp);
void qmp_send_key(KeyValueList *keys, bool has_hold_time, int64_t hold_time, Error **errp);
void qmp_marshal_send_key(QDict *args, QObject **ret, Error **errp);
void qmp_set_link(const char *name, bool up, Error **errp);
void qmp_marshal_set_link(QDict *args, QObject **ret, Error **errp);
void qmp_set_password(const char *protocol, const char *password, bool has_connected, const char *connected, Error **errp);
void qmp_marshal_set_password(QDict *args, QObject **ret, Error **errp);
void qmp_stop(Error **errp);
void qmp_marshal_stop(QDict *args, QObject **ret, Error **errp);
void qmp_system_powerdown(Error **errp);
void qmp_marshal_system_powerdown(QDict *args, QObject **ret, Error **errp);
void qmp_system_reset(Error **errp);
void qmp_marshal_system_reset(QDict *args, QObject **ret, Error **errp);
void qmp_system_wakeup(Error **errp);
void qmp_marshal_system_wakeup(QDict *args, QObject **ret, Error **errp);
TraceEventInfoList *qmp_trace_event_get_state(const char *name, bool has_vcpu, int64_t vcpu, Error **errp);
void qmp_marshal_trace_event_get_state(QDict *args, QObject **ret, Error **errp);
void qmp_trace_event_set_state(const char *name, bool enable, bool has_ignore_unavailable, bool ignore_unavailable, bool has_vcpu, int64_t vcpu, Error **errp);
void qmp_marshal_trace_event_set_state(QDict *args, QObject **ret, Error **errp);
void qmp_transaction(TransactionActionList *actions, bool has_properties, TransactionProperties *properties, Error **errp);
void qmp_marshal_transaction(QDict *args, QObject **ret, Error **errp);
void qmp_x_blockdev_change(const char *parent, bool has_child, const char *child, bool has_node, const char *node, Error **errp);
void qmp_marshal_x_blockdev_change(QDict *args, QObject **ret, Error **errp);
void qmp_x_blockdev_insert_medium(bool has_device, const char *device, bool has_id, const char *id, const char *node_name, Error **errp);
void qmp_marshal_x_blockdev_insert_medium(QDict *args, QObject **ret, Error **errp);
void qmp_x_blockdev_remove_medium(bool has_device, const char *device, bool has_id, const char *id, Error **errp);
void qmp_marshal_x_blockdev_remove_medium(QDict *args, QObject **ret, Error **errp);
void qmp_x_colo_lost_heartbeat(Error **errp);
void qmp_marshal_x_colo_lost_heartbeat(QDict *args, QObject **ret, Error **errp);
BlockDirtyBitmapSha256 *qmp_x_debug_block_dirty_bitmap_sha256(const char *node, const char *name, Error **errp);
void qmp_marshal_x_debug_block_dirty_bitmap_sha256(QDict *args, QObject **ret, Error **errp);
void qmp_xen_colo_do_checkpoint(Error **errp);
void qmp_marshal_xen_colo_do_checkpoint(QDict *args, QObject **ret, Error **errp);
void qmp_xen_load_devices_state(const char *filename, Error **errp);
void qmp_marshal_xen_load_devices_state(QDict *args, QObject **ret, Error **errp);
void qmp_xen_save_devices_state(const char *filename, Error **errp);
void qmp_marshal_xen_save_devices_state(QDict *args, QObject **ret, Error **errp);
void qmp_xen_set_global_dirty_log(bool enable, Error **errp);
void qmp_marshal_xen_set_global_dirty_log(QDict *args, QObject **ret, Error **errp);
void qmp_xen_set_replication(bool enable, bool primary, bool has_failover, bool failover, Error **errp);
void qmp_marshal_xen_set_replication(QDict *args, QObject **ret, Error **errp);

#endif
