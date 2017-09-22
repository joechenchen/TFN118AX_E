#ifndef __PAH8SERIES_DATA_C_H__
#define __PAH8SERIES_DATA_C_H__

#include <stdint.h>

typedef struct {
    uint8_t                     frame_count;
    uint32_t                    time;
    uint8_t                     touch_flag;
    uint32_t                    nf_ppg_channel;
    uint32_t                    nf_ppg_per_channel;
    int32_t                     *ppg_data;
    uint32_t                    nf_mems;
    int16_t                     *mems_data;
} pah8series_data_t;

typedef enum {
    PAH8SERIES_PARAM_IDX_SAMPLE_RATE = 0,
    PAH8SERIES_PARAM_IDX_GSENSOR_MODE,
    PAH8SERIES_PARAM_IDX_PPG_CH_NUM,
    PAH8SERIES_PARAM_IDX_HAS_IR_CH,
    PAH8SERIES_PARAM_IDX_SIGNAL_GRADE,
    PAH8SERIES_PARAM_IDX_IIR_SMOOTH_PRED,
    PAH8SERIES_PARAM_IDX_IIR_LP,
    PAH8SERIES_PARAM_IDX_FIRST_HR_MULTIPLE_OFFSET_MEMS_THR,
    PAH8SERIES_PARAM_IDX_FIRST_HR_IN_MOTION_FLAG,
    PAH8SERIES_PARAM_IDX_FIRST_HR_MEMS_QUALITY_THR,
    PAH8SERIES_PARAM_IDX_FIRST_HR_PPG_QUALITY_THR,
    PAH8SERIES_PARAM_IDX_STATIC_MODE,
    PAH8SERIES_PARAM_IDX_STATIC_HR_UP_IDX,
    PAH8SERIES_PARAM_IDX_STATIC_HR_DN_IDX,
    PAH8SERIES_PARAM_IDX_IS_AUTO,
    PAH8SERIES_PARAM_IDX_IS_TAG,
    PAH8SERIES_PARAM_IDX_IS_8002,
    PAH8SERIES_PARAM_IDX_FIRST_HR_6SEC,
    PAH8SERIES_PARAM_IDX_HR_MODEL_TIME_CONST,
    PAH8SERIES_PARAM_IDX_HR_MODEL_PROGRESS_RATIO,
    PAH8SERIES_PARAM_IDX_INIT_WALK_HR,
    PAH8SERIES_PARAM_IDX_WALK_HR_UP_IDX,
    PAH8SERIES_PARAM_IDX_WALK_HR_DN_IDX,
    PAH8SERIES_PARAM_IDX_HR_TOO_LOW_IDX,
    PAH8SERIES_PARAM_IDX_EN_LWPS,
    PAH8SERIES_PARAM_IDX_EN_JUDGE_WALK,
    PAH8SERIES_PARAM_IDX_EN_CHK_HR_GT_MOTION,
    PAH8SERIES_PARAM_IDX_EN_HI_QUALITY_HR_JMP,
    PAH8SERIES_PARAM_IDX_EN_SPLIT_MOTION_PEAK,
    PAH8SERIES_PARAM_IDX_EN_LOCAL_FIRST_PEAK_TRACK,
    PAH8SERIES_PARAM_IDX_LOCAL_FIRST_PEAK_FRM_ALIVE_THR,
    PAH8SERIES_PARAM_IDX_EN_GLOBAL_FIRST_PEAK_TRACK,
    PAH8SERIES_PARAM_IDX_GLOBAL_FIRST_PEAK_FRM_ALIVE_THR,
    PAH8SERIES_PARAM_IDX_EN_FORCE_HR_OUT_IN10S,
    PAH8SERIES_PARAM_IDX_DEFAULT_HR_OUT_IN10S,
    PAH8SERIES_PARAM_IDX_FIRST_HR_HALF_1X_ENERGY_THT,
    PAH8SERIES_PARAM_IDX_HR_IN_MOTION_SEARCH_ST,
    PAH8SERIES_PARAM_IDX_HR_IN_MOTION_SEARCH_END,
    PAH8SERIES_PARAM_IDX_EN_MA_WALK,
    PAH8SERIES_PARAM_IDX_EN_HAND_CLAP,
    PAH8SERIES_PARAM_IDX_EN_NOR_PRE_DIFF_NOR,
    PAH8SERIES_PARAM_IDX_EN_HALF_HR_CHK,
    PAH8SERIES_PARAM_IDX_EN_NON_MOTION_FIRST_PEAK_TRACK,
    PAH8SERIES_PARAM_IDX_NON_MOTION_FIRST_PEAK_ALIVE_FRM_THR,
    PAH8SERIES_PARAM_IDX_PPG_NORMALIZE_LEN,
    PAH8SERIES_PARAM_IDX_PPG_DIFF_NORMALIZE_LEN,
    PAH8SERIES_PARAM_IDX_EN_CHK_HQ_3X_PPG,
    PAH8SERIES_PARAM_IDX_EN_POST_HR_PROCESS,
    //v519
    PAH8SERIES_PARAM_IDX_SET_EN_JAFMI,
    PAH8SERIES_PARAM_IDX_SET_EN_TIME_DOMAIN_CONFIRM,
    PAH8SERIES_PARAM_IDX_SET_RESERVE_PEAK_RATIO_THR,
    PAH8SERIES_PARAM_IDX_SET_SUPPORT_HR_IDX_OFFSET,
    PAH8SERIES_PARAM_IDX_SET_SUPPORT_CHECK_STEP_FREQ,
     //v520
    PAH8SERIES_PARAM_IDX_SET_SUPPORT_FOUND_HR_IDX,
    PAH8SERIES_PARAM_IDX_SET_SUPPORT_SIGNAL_LEVEL_CHECK,
    PAH8SERIES_NF_PARAM_IDX,
} pah8series_param_idx_t;

typedef enum {
    MSG_SUCCESS = 0,
    MSG_ALG_NOT_OPEN,
    MSG_ALG_REOPEN,
    MSG_MEMS_LEN_TOO_SHORT,
    MSG_NO_TOUCH,
    MSG_PPG_LEN_TOO_SHORT,
    MSG_FRAME_LOSS,
    MSG_INVALID_ARGUMENT,
	MSG_PROCESS_NOT_FINISHED,
	MSG_ADDR_NOT_4BYTE_ALIGNED,

    MSG_NO_MEM = 14,
    MSG_ECG_LEN_TOO_SHORT = 15,

    MSG_HR_READY = 0x30,
    MSG_SIGNAL_POOR = 0x40
} pah8series_msg_code_t;


#endif // PAH8002_DATA_H__
