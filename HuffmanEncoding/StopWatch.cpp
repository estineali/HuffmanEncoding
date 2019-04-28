#include <chrono>

class Stopwatch
{
private:
	std::chrono::time_point<std::chrono::high_resolution_clock> _startTime;
	std::chrono::duration<double> _elapsedTime;
	bool _started;
public:
	Stopwatch(bool isStarted = false)
	{
		_startTime = std::chrono::high_resolution_clock::now();
		_elapsedTime = std::chrono::duration<double>::zero();
		_started = false;
		if (isStarted)
			Start();
	}

	void Start()
	{
		// if stopwatch is already started, do not do anything
		if (_started)
			return;
		_startTime = std::chrono::high_resolution_clock::now();
		_started = true;
	}

	void Stop()
	{
		// if stopwatch is already stopped, do not do anything
		if (!_started)
			return;

		std::chrono::time_point<std::chrono::high_resolution_clock> currentTime =
			std::chrono::high_resolution_clock::now();
		_elapsedTime += currentTime - _startTime;
		_started = false;
	}

	void Reset()
	{
		_started = false;
		_elapsedTime = std::chrono::duration<double>::zero(); 
		_startTime = std::chrono::high_resolution_clock::now();
	}

	long long GetElapsedTime()
	{
		if (_started)
			Stop();

		return std::chrono::duration_cast<std::chrono::milliseconds>(_elapsedTime).count();
	}

};