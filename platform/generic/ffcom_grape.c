#include <platform_override.h>
#include <sbi_utils/fdt/fdt_helper.h>
#include <sbi_utils/fdt/fdt_fixup.h>

static u64 ffcom_grape_tlbr_flush_limit(const struct fdt_match *match)
{
	return 0;
}

static int ffcom_grape_fdt_fixup(void *fdt, const struct fdt_match *match)
{
	return 0;
}

static const struct fdt_match ffcom_grape_match[] = {
	{ .compatible = "ffcome-grape" },
	{ },
};

const struct platform_override ffcom_grape = {
	.match_table = ffcom_grape_match,
	.tlbr_flush_limit = ffcom_grape_tlbr_flush_limit,
	.fdt_fixup = ffcom_grape_fdt_fixup,
};
