#include "Blam\BitStream.hpp"

namespace Blam
{
	bool BitStream::ReadBit()
	{
		typedef bool (__thiscall* ReadBitPtr)(BitStream *thisPtr);
		ReadBitPtr ReadBit = reinterpret_cast<ReadBitPtr>(0x558570);
		return ReadBit(this);
	}

	uint64_t BitStream::ReadBits(int bits)
	{
		if (bits <= 32)
		{
			typedef uint32_t(__thiscall* ReadBits32Ptr)(BitStream *thisPtr, int bits);
			ReadBits32Ptr ReadBits32 = reinterpret_cast<ReadBits32Ptr>(0x5589A0);
			return ReadBits32(this, bits);
		}
		
		// To read more than 32 bits at a time, this function has to be called instead
		typedef uint64_t(__thiscall* ReadBits64Ptr)(BitStream *thisPtr, int bits);
		ReadBits64Ptr ReadBits64 = reinterpret_cast<ReadBits64Ptr>(0x559160);
		return ReadBits64(this, bits);
	}

	void BitStream::WriteBits(uint64_t val, int bits)
	{
		if (BitsAvailable(bits))
		{
			position += bits;
			windowBitsUsed += bits;
			window <<= bits;
			window |= val & (0xFFFFFFFFFFFFFFFF >> (64 - bits));
		}
		else
		{
			typedef void (__thiscall* WriteBitsPtr)(BitStream *thisPtr, uint64_t val, int bits);
			WriteBitsPtr WriteBits = reinterpret_cast<WriteBitsPtr>(0x559EB0);
			return WriteBits(this, val, bits);
		}
	}

	void BitStream::ReadBlock(size_t bits, uint8_t *out)
	{
		typedef void(__thiscall* ReadBlockPtr)(BitStream *thisPtr, uint8_t *out, size_t bits);
		ReadBlockPtr ReadBlock = reinterpret_cast<ReadBlockPtr>(0x558740);
		ReadBlock(this, out, bits);
	}

	void BitStream::WriteBlock(size_t bits, const uint8_t *data)
	{
		typedef void(__thiscall* WriteBlockPtr)(BitStream *thisPtr, const uint8_t *data, size_t bits, int unkn);
		WriteBlockPtr WriteBlock = reinterpret_cast<WriteBlockPtr>(0x55A000);
		WriteBlock(this, data, bits, 0);
	}
}